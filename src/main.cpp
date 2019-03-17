#include <iostream>
#include <string>
#include "../inc/searchs.h"
#include "../inc/analysis_aux.h"

int main(int argc, char const *argv[])
{

	/*!!! NUMERO DE AMOSTRAS É DIFERENTE DO TAMANHO DO VETOR !!!!*/



	int data_size = 100;
	int sampling = 20;
	std::vector<std::function<itr(int,itr,itr)> > searchs_v;
	
	// sampling = calc_sampling(sampling, data_size);

	if(argc == 1){

		control_flux(searchs_v, -10, data_size, sampling);
		searchs_v = {linear, binary, fibonacci, ternary, jump, binary_r, ternary_r};
	
	}
	else if(argc > 1 && argc < 9)
	{
		for (int i = 0; i < argc; ++i)
		{
			if(std::string(argv[i]) == "lin")
			{
				searchs_v.push_back(linear);
			}
			else if(std::string(argv[i]) == "bin")
			{
				searchs_v.push_back(binary);
			}
			else if(std::string(argv[i]) == "fib")
			{
				searchs_v.push_back(fibonacci);
			}
			else if(std::string(argv[i]) == "ter")
			{
				searchs_v.push_back(ternary);
			}else if(std::string(argv[i]) == "jum"){
				searchs_v.push_back(jump);
			}else if(std::string(argv[i]) == "bin_r"){
				searchs_v.push_back(binary_r);
			}else if(std::string(argv[i]) == "ter_r"){
				searchs_v.push_back(ternary_r);
			}
		}
		
		control_flux(searchs_v, -10, data_size, sampling);

	}
	else if(argc > 9){
		std::cout << "type a valid entry!" << std::endl;
		return -1;
	}

	
	// std::function<itr (int, itr, itr) > search = binary;
	
	
	return 0;
}