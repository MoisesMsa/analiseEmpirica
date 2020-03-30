/**
 * @file util.cpp
 * @author     Moisés Sousa Araújo e Bruna Hellen de Castro Dantas Barbosa
 * @brief      execution functions implementation.
 */

#include "../inc/util.h"

std::vector<long int> dataset;
std::vector<double> time_avg;
std::vector<int> input_size;
std::vector<std::string> searchs_labels;


void data_fill(int data_size)
{
	std::cout << "allocating dataset vector ..." << std::endl;
	for (int i = 0; i < data_size; ++i) dataset.push_back(i); 
	std::cout << "the datasets are ready!" << std::endl;
}

void run_search(std::vector<std::function<itr(int,itr,itr)> > searchs_v, int key, int sample_total, int grow_rate)
{

	std::chrono::duration<double> cur_time;
	double avg;
	unsigned int exec_count = 0, count_busca = 0;
	
	int  sam_count = 0;
	
	auto l_dataset = dataset.begin(), r_dataset = l_dataset;
	auto search_ptr = searchs_v.begin();
	auto search = *search_ptr;

	std::cout << "running searchs..." << std::endl;
	
	while(sam_count < sample_total )
	{
		// std::cout << "interval: " << grow_rate << " sample: " << sam_count << " " << "distance: " << std::distance(l_dataset, r_dataset) << std::endl;
 		
 		if(count_busca == searchs_v.size())
 		{
			save_input_size(std::distance(l_dataset, r_dataset));
			sam_count++; count_busca  = 0; search_ptr = searchs_v.begin(); 
			if(sam_count > 1) r_dataset += grow_rate;
		}

		if(exec_count == 99)
		{
			save_avg(avg);
			exec_count = 0; 
			count_busca++;
			
			if(search_ptr+1 < searchs_v.end())
			{
				++search_ptr; 
				search = *search_ptr;
			} 
		}
		else
		{

			auto init = std::chrono::high_resolution_clock::now();
			search(key, l_dataset, r_dataset);
			auto end = std::chrono::high_resolution_clock::now();
			
			cur_time = std::chrono::duration_cast<std::chrono::microseconds>(end - init);

			avg = calc_avg(avg, cur_time.count(), exec_count);

			exec_count++;
		}
	}

	std::cout << "writing output file..." << std::endl;
	writeData();
	std::cout << "finished!" << std::endl;
}

int grow_tax(int sample, int data_size){
	auto grow_rate = (data_size-1000)/sample;
	return grow_rate;
}

double calc_avg(double last_avg, double cur_time, int k)
{
	if(k == 0){
		return last_avg;
	}else{
		return last_avg + (cur_time - last_avg)/static_cast<double>(k);
	}
}

void save_avg(double avg)
{
	time_avg.push_back(avg);
}

void save_input_size(int size){
	input_size.push_back(size);
}	


void add_label(std::vector<std::string> labels){
	searchs_labels = labels;
}

void add_label(std::string label){
	searchs_labels.push_back(label);
}


void writeData(){

	unsigned int file_size = time_avg.size() + searchs_labels.size() + input_size.size(), j = 0;
	
	auto time = time_avg.begin();
	auto label = searchs_labels.begin();
	auto size = input_size.begin();

	std::string filename;

	std::ofstream output;

	if(searchs_labels.size() == 1){
		filename = "../output/"+*label+".plt";
	}else{
		filename = "../output/analyze_output.plt";
	}

	output.open(filename);

	output << std::left << std::setw(10) << "# N";
	
	for(unsigned int i = 0; i < file_size; i++){
		
		if(i < searchs_labels.size())
		{
			output << std::left << std::setw(13) << *label;
			++label;
		}else if(i == searchs_labels.size()){
			output << "\n";
		}else{

			if(j == 1 && size < input_size.end()){
				output << std::left << std::setw(10) << *size;
				++size;
			}

			if(time < time_avg.end()){
				output << std::left << std::setw(13) << *time;
				++time;
			}

		}

		if(j == searchs_labels.size() || i == searchs_labels.size()){
			output << "\n";
			j = 0;
		}

		++j;
		
	}

	output.close();
}

void print(){
	std::cout << "time vector size: " << time_avg.size() << std::endl;
	for (auto i = time_avg.begin(); i < time_avg.end(); ++i) 
		std::cout << *i << std::endl;
}
