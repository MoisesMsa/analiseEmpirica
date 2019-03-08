#include <iostream>
#include <chrono>
#include "search.h"

int main(int argc, char const *argv[])
{
	int testsTotal = std::stoi(argv[1]);
	std::vector<long int> data;
	std::vector<long int> timeData;

	std::cout << "Vector Debug: ";

	for (int i = 0; i < 15; ++i)
	{
		data.push_back(i+20);
		std::cout << data[i] << " ";
	}

	std::cout << std::endl;


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
	ternary(-1, data.begin(), data.end());
	ternary(-10, data.begin(), data.end());
	ternary(31, data.begin(), data.end());
	ternary(34, data.begin(), data.end());
	#endif

	#ifdef JUM
	jump(70, data.begin(), data.end());
	#endif


	#ifdef BIN_R
	// std::cout << "------------------------------------------------------" << std::endl;
	// binary_r(24, data.begin(), data.end());
	// std::cout << "------------------------------------------------------" << std::endl;
	// binary_r(34, data.begin(), data.end());
	// binary_r(31, data.begin(), data.end());
	// std::cout << "------------------------------------------------------" << std::endl;
	// binary_r(70, data.begin(), data.end());
	// std::cout << "------------------------------------------------------" << std::endl;
	// binary_r(20, data.begin(), data.end());
	// binary_r(-20, data.begin(), data.end());
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

	return 0;
}