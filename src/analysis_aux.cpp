#include "../inc/analysis_aux.h"

std::vector<double> run_time;
std::vector<long int> data;

void fill_data(int data_size){
	// std::cout << "alocatting data vector ..." << std::endl;
	for (int i = 0; i < data_size; ++i){
		// std::cout << i << std::endl;
		data.push_back(i); 
	} 
	// std::cout << "allocation finished!" << std::endl;
}

void run_search(std::function <itr (int ,itr, itr)> search, int key, int data_total){
	// while(functions != end){

	auto init = std::chrono::high_resolution_clock::now();
	search(key, data.begin(), data.end());
	auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> interval = end - init; 
    std::cout << interval.count() << "ms" << std::endl;
    run_time.push_back(interval.count());
	// ++functions;
	//aumentar intervalo no vector
	// }
}


void print_time(){
	std::cout << "time vector size: " << run_time.size() << std::endl;
	std::cout << "data vector size: " << data.size() << std::endl;
	for (auto i = run_time.begin(); i < run_time.end(); ++i) 
	{
		std::cout << *i << std::endl;
	}
}


// void saveTime(int interval, std::vector){
// 	time.push_back(interval);
// }

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