#include <iostream>
#include "../inc/searchs.h"
#include "../inc/analysis_aux.h"

int main(int argc, char const *argv[])
{

	/*!!! NUMERO DE AMOSTRAS É DIFERENTE DO TAMANHO DO VETOR !!!!*/

	int data_size = 100000;
	int sampling = std::stoi(argv[1]);
	
	std::function<itr (int, itr, itr) > search = binary;
	fill_data(data_size);
	
	// run_search(search, -10, data_size);

	// print_time();

	return 0;
}