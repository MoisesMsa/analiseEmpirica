#include <iostream>
#include <string>
#include "../inc/searchs.h"
#include "../inc/analysis_aux.h"

int main(int argc, char const *argv[])
{

	/*!!! NUMERO DE AMOSTRAS É DIFERENTE DO TAMANHO DO VETOR !!!!*/

	int data_size = 100;
	int sampling = 20;

	std::vector<std::function<itr(int,itr,itr)> > searchs_v = {linear, binary, fibonacci, ternary, jump, binary_r, ternary_r};

	
	control_flux(searchs_v, -10, data_size, sampling);
	
	// sampling = calc_sampling(sampling, data_size);

	// if(argc == 1){
		
	// 	std::cout << "init" << std::endl;
	// 	auto search = func_v.begin();
	// 	fill_data(data_size);
	// 	run_search(*search, -10, sampling);

	// }else if(argc > 1 && argc < 7){
		
	// 	control_flux(func_v, sampling);
	// }
	// // else if(argc > 2){
	// 	// for (int i = 0; i < argc; ++i)
	// 	// {
	// 	// 	if(std::string(argv[i]) == "linear")
	// 	// 	{
	// 	// 		std::cout << "busca linear: " << std::endl;
	// 	// 	}else if(std::string(argv[i]) == "binary")
	// 	// }

	// 	// std::cout << std::endl;
	// // }
	// else if(argc > 7){
	// 	std::cout << "type a valid entry!" << std::endl;
	// 	return -1;
	// }

	
	// std::function<itr (int, itr, itr) > search = binary;
	
	
	// #ifdef DEBUG
	print_time();
	// #endif


	return 0;
}