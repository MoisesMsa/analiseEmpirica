#include <iostream>
#include "../inc/searchs.h"
#include "../inc/analysis_aux.h"

int main(int argc, char const *argv[])
{

	/*!!! NUMERO DE AMOSTRAS É DIFERENTE DO TAMANHO DO VETOR !!!!*/

	int data_size = 10000;
	int sampling = std::stoi(argv[1]);

	sampling = calc_sampling(sampling, data_size);

	std::cout << "sampling: " << sampling << std::endl;
	
	fill_data(data_size);
	
	std::function<itr (int, itr, itr) > search = binary;
	
	run_search(search, -10, sampling);

	// print_time();

	return 0;
}