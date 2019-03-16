#include "../inc/analysis_aux.h"

std::vector<long int> dataset;
std::vector<double> time_avg;
std::vector<int> input_size;
std::vector<char> searchs_labels;

void fill_data(int data_size){
	std::cout << "alocatting data vector ..." << std::endl;
	for (int i = 0; i < data_size; ++i){
		dataset.push_back(i); 
	} 
	std::cout << "allocation finished!" << std::endl;
}

void run_search(std::function <itr (int ,itr, itr)> search, int key, int sampling){
	
	auto first = dataset.begin(), last = first + sampling;
	std::chrono::duration<double> avg_exec;

	while(last <= dataset.end())
	{
		std::cout << "running search" << std::endl;
		save_input_size(std::distance(first, last));

		for (int i = 0; i < 100; ++i)
		{
			auto init = std::chrono::high_resolution_clock::now();
			search(key, first, last);
			auto end = std::chrono::high_resolution_clock::now();

	 	   	avg_exec += (end - init);
		}
	    save_avg(avg_exec.count());
	
	    last += sampling;
	}
}

int calc_sampling(int sampling, int data_size){
	sampling = data_size/sampling;
	return sampling;
}


void save_avg(double t_interval){
	if(time_avg.empty()){
		std::cout << "empty avg time!" << std::endl;
		time_avg.push_back(t_interval/100);
	}else{
		
		auto last_avg = time_avg.end();
		t_interval = *last_avg + (t_interval - *last_avg)/100;
		
		time_avg.push_back(t_interval);
	}
}

void save_input_size(int d_interval){
	input_size.push_back(d_interval);
}	

void save_labels(char label){
	searchs_labels.push_back(label);
}

// void write_data(std::vector<double> &time){
// 	ofstream grap("analyze graph");
// 	//titulo da pesquisa
// 	//numero de casos de teste
// 	//coluna com os daods correspondentes ao total das pesquisas especificadas pelo usuário

// 	for (int i = 0; i < count; ++i)
// 	 {

// 	 } 
// }

// double average(){

// }

void print_time(){
	std::cout << "time vector size: " << time_avg.size() << std::endl;
	std::cout << "data vector size: " << dataset.size() << std::endl;
	for (auto i = time_avg.begin(); i < time_avg.end(); ++i) 
		std::cout << *i << std::endl;
}