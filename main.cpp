#include <iostream>
#include <vector>
#include <chrono>
#include "search.h"

int main(int argc, char const *argv[])
{
	int testsTotal = argv[1];
	std:vector<long int> data;
	std:vector<long int> timeData;


	for (int i = 0; i < 15; ++i)
	{
		data.push_back(999);
	}

	for (int i = 0; i < testsTotal; ++i)
	{
		auto init = std::chrono::system_clock::now;
		//busca()
		#if -l
		linear();
		#endif
		//aumentar intervalo no vector
		auto end = std::chrono::system_clock::now;

		saveTime(end - init);
	}

	return 0;
}