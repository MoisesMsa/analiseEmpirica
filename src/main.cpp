#include <iostream>
#include "../inc/searchs.h"
#include "../inc/analysis_aux.h"

int main(int argc, char const *argv[])
{

	int data_size = 1000;
	int sampling = 10;
	sampling = calc_sampling(sampling, data_size);
	std::vector<std::function<itr(int,itr,itr)> > searchs_v;
	std::vector<std::string> labels;

	if(argc == 1){

		searchs_v = {linear, binary, fibonacci, ternary, jump, binary_r, ternary_r};
		labels = {"lin", "bin", "fib", "ter", "jump", "bin_r", "ter_r"};
	
		add_label(labels);
		control_flux(searchs_v, -10, data_size, sampling);
		print_time();
		
	}else if(argc > 1 && argc < 9){

		sampling = std::stoi(argv[1]);
		sampling = calc_sampling(sampling, data_size);
	
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
		
		control_flux(searchs_v, -10, data_size, sampling);

	}else if(argc > 9){
		std::cout << "type a valid entry!" << std::endl;
		return -1;
	}

	return 0;
}