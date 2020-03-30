/**
 * @file main.cpp
 * @author     Moisés Sousa Araújo e Bruna Hellen de Castro Dantas Barbosa
 * @brief      The main execution file.
 */

#include <iostream>
#include "../inc/searchs.h"
#include "../inc/util.h"

int main(int argc, char const *argv[])
{

	//1x10^7
	int data_size = 10000000;
	int sample_total = 0, sample_interval = 0;

	std::vector<std::function<itr(int,itr,itr)> > searchs_v;
	std::vector<std::string> labels;

	if(argc == 1)
	{
		//1x10^5
		sample_total = 100000;
		sample_interval = grow_tax(sample_total, data_size);
		
		data_fill(data_size);
		
		searchs_v = {linear, binary, fibonacci, ternary, jump, binary_r, ternary_r};
		labels = {"lin", "bin", "fib", "ter", "jum", "bin_r", "ter_r"};
	
		add_label(labels);
		run_search(searchs_v, -10, sample_total, sample_interval);
		
	}
	else if(argc > 1 && argc < 9)
	{

		sample_total = std::stoi(argv[1]);
		sample_interval = grow_tax(sample_total, data_size);

		for (int i = 0; i < argc; ++i){

			if(std::string(argv[i]) == "lin"){
			
				searchs_v.push_back(linear);
				add_label("lin");
			
			}else if(std::string(argv[i]) == "bin"){

				searchs_v.push_back(binary);
				add_label("bin");
			
			}else if(std::string(argv[i]) == "fib"){
			
				searchs_v.push_back(fibonacci);
				add_label("fib");
			
			}else if(std::string(argv[i]) == "ter"){
			
				searchs_v.push_back(ternary);
				add_label("ter");
			
			}else if(std::string(argv[i]) == "jum"){
			
				searchs_v.push_back(jump);
				add_label("jum");
			
			}else if(std::string(argv[i]) == "bin_r"){
			
				searchs_v.push_back(binary_r);
				add_label("bin_r");
			
			}else if(std::string(argv[i]) == "ter_r"){
			
				searchs_v.push_back(ternary_r);
				add_label("ter_r");
			
			}
		}

		if(searchs_v.empty() == true){
			std::cout << "type a valid search!" << std::endl;
		}else{
			data_fill(data_size);
			run_search(searchs_v, -10, sample_total, sample_interval);
		}
		

	}
	else if(argc > 9)
	{
		std::cout << "type a valid entry!" << std::endl;
		return -1;
	}

	return 0;
}