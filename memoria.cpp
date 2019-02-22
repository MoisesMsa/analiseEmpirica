#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{

	std::vector<long int> teste;
	
	for (int i = 0; i <= 2^30; ++i)
	{
		std::cout << i << std::endl;
		teste.push_back(99999999999999);		
	}
	
	return 0;
}