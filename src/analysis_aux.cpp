#include "../inc/analysis_aux.h"

std::vector<long int> dataset;
std::vector<double> time_avg;
std::vector<int> input_size;
std::vector<std::string> searchs_labels;


void fill_data(int data_size){
	std::cout << "alocatting data vector ..." << std::endl;
	for (int i = 0; i < data_size; ++i){
		dataset.push_back(i); 
	} 
	std::cout << "allocation finished!" << std::endl;
}

void run_search(std::function <itr (int ,itr, itr)> search, int key, itr l, itr r){
	
	std::chrono::duration<double> avg_exec;

	for (int i = 0; i < 100; ++i)
	{
		auto init = std::chrono::high_resolution_clock::now();
		search(key, l, r);
		auto end = std::chrono::high_resolution_clock::now();

 	   	avg_exec += (end - init);
	}

    save_avg(avg_exec.count());
}

void control_flux(std::vector<std::function<itr(int,itr,itr)> > searchs_v, int key, int data_size, int sampling){
	
	fill_data(data_size);

	auto first = dataset.begin(), last = first + sampling;
	std::cout << "sam: " << sampling << '\n';
	std::cout << "distance init: " << std::distance(first, last) << '\n';

	while(last <= dataset.end())
	{
		save_input_size(std::distance(first, last));
		
		for (auto search = searchs_v.begin(); search < searchs_v.end(); ++search)
		{
			run_search(*search, key, first, last);
		}

		last += sampling;
	}

	writeData();
}


int calc_sampling(int sampling, int data_size){
	sampling = data_size/sampling;
	return sampling;
}

void save_avg(double t_interval){

	//check if the time_avg is empty to avoid seg fault
	if(time_avg.empty())
	{
		time_avg.push_back(t_interval/100);
	}
	else
	{
	
		auto last_avg = time_avg.end();
		//progressive average to avoid imprecision rounding
		t_interval = *last_avg + (t_interval - *last_avg)/100;
		time_avg.push_back(t_interval);
	
	} 
}

void save_input_size(int d_interval){
	input_size.push_back(d_interval);
}	

void print_time(){
	std::cout << "time vector size: " << time_avg.size() << std::endl;
	std::cout << "data vector size: " << dataset.size() << std::endl;
	for (auto i = time_avg.begin(); i < time_avg.end(); ++i) 
		std::cout << *i << std::endl;
}

void add_label(std::vector<std::string> labels){
	searchs_labels = labels;
}

void add_label(std::string label){
	searchs_labels.push_back(label);
}


void writeData(){

	std::cout << "time " << time_avg.size() << std::endl;
	std::cout << "labels " << searchs_labels.size() << std::endl;
	std::cout << "input " << input_size.size() << std::endl;

	int file_size = time_avg.size() + searchs_labels.size() + input_size.size(), j = 0;
	std::cout << "file size" << file_size << std::endl;

	auto time = time_avg.begin();
	auto label = searchs_labels.begin();
	auto size = input_size.begin();

	std::ofstream output;

	output.open("../output/analyze_output.txt");

	output << "# N ";

	// print_time();

	std::cout << "time AVG: " << time_avg.size() << std::endl;

	for(int i = 0; i <= file_size; i++){
		std::cout << "i: " << i << std::endl;
		if(i < searchs_labels.size())
		{
			output << *label << "   ";
			++label;
		}else if(j == searchs_labels.size()){
			output << " \n";
			j = 0;
		}else if(j == 1){
			output << *size << "    ";
			++size;
		}else{
			output << *time << "    ";
			++time;
		}

		++j;
	}

	output.close();
}
