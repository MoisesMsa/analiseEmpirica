#include "search.h"


// void linear(int key, itr first, itr last){
// 	while(first != last){
// 	// -------------------------
// 	#ifdef DEBUG
// 		std::cout << *first << std::endl;
// 	#endif
// 	// -------------------------
// 		if(key == *first) break;
// 		++first;
// 	}
// }

itr binary(int key, itr l, itr r){
	
	int distance = std::distance(l, r)/2;
	auto middle = l + distance;
	std::cout << "m_value: " <<*middle << std::endl;
	
	while(distance != 0)
	{
		distance = std::distance(l, r)/2;
		middle = l + distance;

		std::cout << *middle << std::endl;
		
		if(*middle == key){
			return middle;			
		}
		else if(*middle > key)
		{
			r = --middle;
		}
		else if(*middle < key)
		{
			l = ++middle;
		}

	}	
	return middle;
}

// void fibonacci(){
// 	std::cout << "teste" << std::endl;
// }



// void jump(){
// 	std::cout << "teste" << std::endl;
// }

// void ternary(){
// 	std::cout << "teste" << std::endl;
// }

// void saveTime(int interval, std::vector){
// 	time.push_back(interval);
// }

// void write_data(std::vector<double> &time){
// 	ofstream grap("analyze graph");
// 	//titulo da pesquisa
// 	//numero de casos de teste
// 	//coluna com os daods correspondentes ao total das pesquisas especificadas pelo usuário

// 	for (int i = 0; i < count; ++i)
// 	 {

// 	 } 
// }

// double average(){

// }