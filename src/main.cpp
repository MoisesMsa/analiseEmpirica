#include <iostream>
#include <chrono>
#include <string>
#include<bits/stdc++.h> 
#include "search.h"
#include <function.h>

using itr = std::vector<long int>::iterator;

#define maxDataset 50;



int main(int argc, char const *argv[])
{
	//Vector where the group of datasets are stored
    std::vector<std::std::vector<long int>> datasets;
    std::vector<std::function<itr(int, itr, itr)>> func_v = {linear, binary, fibonacci, ternary, jump, binary_r, te
    };
    int datasetQuantity = maxDataset;

    if(argc > 1){  datasetQuantity = std::stoi(argv[1]);  };

    
    generateDataset(datasetQuantity, datasets);

   	/*


	#ifdef LIN
	linear(5, data.begin(), data.end());
	#endif
	
	#ifdef BIN
	binary(-20, data.begin(), data.end());
	binary(5, data.begin(), data.end());
	binary(21, data.begin(), data.end());
	#endif

	#ifdef FIB
	fibonacci(5, data.begin(), data.end());
	fibonacci(31, data.begin(), data.end()-1);
	#endif

	#ifdef TER
	ternary(20, data.begin(), data.end());
	ternary(21, data.begin(), data.end());
	ternary(22, data.begin(), data.end());
	ternary(23, data.begin(), data.end());
	ternary(24, data.begin(), data.end());
	ternary(25, data.begin(), data.end());
	ternary(26, data.begin(), data.end());
	ternary(27, data.begin(), data.end());
	ternary(28, data.begin(), data.end());
	ternary(29, data.begin(), data.end());
	ternary(30, data.begin(), data.end());
	ternary(31, data.begin(), data.end());
	ternary(32, data.begin(), data.end());
	ternary(33, data.begin(), data.end());
	ternary(34, data.begin(), data.end());
	ternary(35, data.begin(), data.end());
	ternary(36, data.begin(), data.end());
	ternary(37, data.begin(), data.end());
	#endif

	#ifdef JUM
	jump(70, data.begin(), data.end());
	#endif


	#ifdef BIN_R
	std::cout << "------------------------------------------------------" << std::endl;
	binary_r(24, data.begin(), data.end());
	std::cout << "------------------------------------------------------" << std::endl;
	binary_r(34, data.begin(), data.end());
	std::cout << "------------------------------------------------------" << std::endl;
	binary_r(31, data.begin(), data.end());
	std::cout << "------------------------------------------------------" << std::endl;
	binary_r(70, data.begin(), data.end());
	std::cout << "------------------------------------------------------" << std::endl;
	binary_r(20, data.begin(), data.end());
	std::cout << "------------------------------------------------------" << std::endl;
	binary_r(-20, data.begin(), data.end());
	#endif

	#ifdef TER_R
	ternary_r(-1, data.begin(), data.end());
	// ternary_r(-20, data.begin(), data.end());
	ternary_r(20, data.begin(), data.end());
	ternary_r(21, data.begin(), data.end());
	ternary_r(22, data.begin(), data.end());
	ternary_r(23, data.begin(), data.end());
	ternary_r(24, data.begin(), data.end());
	ternary_r(25, data.begin(), data.end());
	ternary_r(26, data.begin(), data.end());
	ternary_r(27, data.begin(), data.end());
	ternary_r(28, data.begin(), data.end());
	ternary_r(29, data.begin(), data.end());
	ternary_r(30, data.begin(), data.end());
	ternary_r(31, data.begin(), data.end());
	ternary_r(32, data.begin(), data.end());
	ternary_r(33, data.begin(), data.end());
	ternary_r(34, data.begin(), data.end());
	ternary_r(35, data.begin(), data.end());
	ternary_r(36, data.begin(), data.end());
	ternary_r(37, data.begin(), data.end());
	ternary_r(-1, data.begin(), data.end());
	ternary_r(24, data.begin(), data.end());
	ternary_r(30, data.begin(), data.end());
	#endif

	// for (int i = 0; i < testsTotal; ++i)
	// {
	// 	auto init = std::chrono::system_clock::now;
	// 	//busca()
	// 	#if -l
	// 	linear();
	// 	#endif
	// 	//aumentar intervalo no vector
	// 	auto end = std::chrono::system_clock::now;

	// 	// saveTime(end - init);
	// }

	*/

	return 0;
}