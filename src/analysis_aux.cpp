#include "../inc/analysis_aux.h"

std::vector<double> time_data;
std::vector<long int> dataset;
std::vector<int> dataset_interval;
std::vector<char> data_label;

void fill_data(int data_size){
	std::cout << "alocatting data vector ..." << std::endl;
	for (int i = 0; i < data_size; ++i){
		// std::cout << i << std::endl;
		dataset.push_back(i); 
	} 
	std::cout << "allocation finished!" << std::endl;
}

void run_search(std::function <itr (int ,itr, itr)> search, int key, int sampling){
	
	auto first = dataset.begin();
	auto last = dataset.end();
		
	while(last != dataset.end())
	{
	
		auto init = std::chrono::high_resolution_clock::now();
		search(key, first, last);
		auto end = std::chrono::high_resolution_clock::now();

	    std::chrono::duration<double> interval = end - init; 

	    save_time(interval.count());
	    std::cout << interval.count() << "ms" << std::endl;
	
	    last += sampling;
	}
}

int calc_sampling(int sampling, int data_size){
	sampling = data_size/sampling;
	return sampling;
}


void print_time(){
	std::cout << "time vector size: " << time_data.size() << std::endl;
	std::cout << "data vector size: " << dataset.size() << std::endl;
	for (auto i = time_data.begin(); i < time_data.end(); ++i) 
	{
		std::cout << *i << std::endl;
	}
}


void save_time(double interval){
	time_data.push_back(interval);
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