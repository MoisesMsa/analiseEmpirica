#include <iostream>
#include <chrono>
#include "search.h"

int main(int argc, char const *argv[])
{
	int testsTotal = std::stoi(argv[1]);
	std::vector<long int> data;
	std::vector<long int> timeData;


	for (int i = 0; i < 15; ++i)
	{
		data.push_back(i+20);
		std::cout << data[i] << " ";
	}

	std::cout << std::endl;


	// linear(5, data.begin(), data.end());
	binary(5, data.begin(), data.end());
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