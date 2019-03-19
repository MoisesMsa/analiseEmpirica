#include "../inc/searchs.h"


itr linear(int key, itr l, itr r)
{	
	while(l != r){

	#ifdef DEBUG
		std::cout << *l << std::endl;
	#endif

		if(key == *l) return l;
		++l;
	}


	#ifdef DEBUG
	std::cout << "not found" << std::endl;
	#endif

	return r;
}

itr binary(int key, itr l, itr r)
{

	int distance;
	itr middle;

	
	while(distance != 0)
	{

		distance = std::distance(l, r)/2;
		middle = l + distance;

		#ifdef DEBUG
			std::cout << "binary search middle value: " <<*middle << std::endl;
		#endif
		
		if(*middle == key)
		{
			#ifdef DEBUG
			std::cout << "binary found value: " <<*middle << std::endl;
			#endif
			
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

	#ifdef DEBUG
			std::cout << "Not Found " << std::endl;
	#endif
	
	return r;
}

int generateFib(itr l, itr r)
{
	int aux = 0, fib1 = 0, fib2 = 1, distance = std::distance(l, r);

	while(fib1 + fib2 <= distance)
	{
		aux = fib1;
		fib1 = fib1 + fib2;
		fib2 = aux;
	}

	#ifdef DEBUG
	std::cout << "interval: " << distance << " Fib1: " << fib1 << " Fib2: " << fib2 << " FibN " << fib1 + fib2 << std::endl;
	#endif

	return fib1;
}

itr fibonacci(int key, itr l, itr r)
{
	
	#ifdef DEBUG
	std::cout << "FIBONACCI init key: " <<  key << std::endl;
	#endif	

	auto distanceF1 = generateFib(l, r);
	itr itrFib1;
	
	while(distanceF1 != 0){

		distanceF1 = generateFib(l, r);
		itrFib1 = l + distanceF1;
		
		
		if(*itrFib1 == key)
		{
			#ifdef DEBUG
			std::cout << "found: " << *itrFib1 << std::endl;
			#endif

			return itrFib1;			
		}
		else if(*itrFib1 > key)
		{
			r = --itrFib1;
		}
		else if(*itrFib1 < key)
		{
			l = ++itrFib1;
		}

	
		#ifdef DEBUG
		std::cout << "distance: " << distanceF1 << std::endl;
		std::cout << "l: " << *l << " r: " << *r << std::endl;
		
		std::cout << "vetor: ";
		for(auto i = l; i < r; ++i) std::cout << *i << " ";
		std::cout << std::endl;
		#endif
	}

	#ifdef DEBUG
	std::cout << "not found " << *r << std::endl;
	#endif

	return r;
}

itr ternary(int key, itr l, itr r)
{
	auto partition = std::distance(l, r)/3;
	
	auto t1 = l + partition;
	auto t2 = t1 + partition;

	while(partition != 0)
	{

		partition = std::distance(l, r)/3;
		t1 = l + partition;
	    t2 = t1 + partition;
		
		if(*t1 == key)
		{
			#ifdef DEBUG
			std::cout << ">>>>>>>>>>>>> found: " << *t1 << std::endl;
			#endif
			
			return t1;
		}
		else if(*t2 == key)
		{
			#ifdef DEBUG
			std::cout << ">>>>>>>>>>>>> found: " << *t2 << std::endl;
			#endif

			return t2;
		}
		else if(*t1 < key)
		{
			l = ++t1; 
		}
		else if(*t2 > key)
		{
			r = --t2;
		}
		else
		{
			l = ++t2; 
			r = --t1;
		}

		#ifdef DEBUG
		for(auto i = l; i < r; ++i) std::cout << *i << " ";
		std::cout << std::endl;
		#endif
	}

	#ifdef DEBUG
	std::cout << ">>>>>>>>>>>>>>> not found: " << key << std::endl;
	#endif

	return r;
}

itr jump(int key, itr l, itr r)
{
	#ifdef DEBUG
		std::cout << "jump val: " << key << std::endl;
	#endif

	while(l != r)
	{

		// std::cout << "L: " << *l << std::endl;
		
		#ifdef DEBUG
		for(auto i = l; i < r; ++i) std::cout << *i << " ";
		std::cout << std::endl;
		#endif

		if(*l == key)
		{
			#ifdef DEBUG
			std::cout << "found: " << *l << std::endl;
			#endif

			return l;
		}
		else if(key < *l)
		{
			return linear(key, l, l+3);
		}
		else if(key > *l)
		{
			l = l+3;
		}


	}

	#ifdef DEBUG
	std::cout << "not found" << std::endl;
	#endif

	return r;
}


itr binary_r(int key, itr l, itr r)
{

	int m_distance = std::distance(l, r)/2;
	itr m_val = l + m_distance;
	
	if(l <= r)
	{
	
		#ifdef DEBUG
		std::cout << "l: " << &*l << " r: " << &*r << std::endl;
		std::cout << "l: " << *l << " r: " << *r << std::endl;
		std::cout << "bin_recursive val: " << *m_val << std::endl;
		std::cout << "distance val: " << m_distance << std::endl;

		std::cout << "vetor: ";
		for(auto i = l; i < r; ++i) std::cout << *i << " ";
		std::cout << std::endl;
		#endif
		
		if(key == *m_val)
		{
			#ifdef DEBUG 
			std::cout << ">>>>>>>>>>>>>>>>> found: " << *m_val << std::endl;
			#endif
			
			return m_val;
		}
		else if(key < *m_val)
		{
			return binary_r(key, l, --m_val);
		}
		else if(key > *m_val)
		{
			return binary_r(key, ++m_val, r);
		}
	}
	
	#ifdef DEBUG 
	std::cout << ">>>>>>>>>>>>>>>>> not found: " << key << std::endl;
	#endif

	return r;
}

itr ternary_r(int key, itr l, itr r){

	// #ifdef DEBUG
	// std::cout << "init ternary val: " << key << std::endl;
	// #endif

	auto partition = std::distance(l, r)/3;
	
	auto t1 = l + partition;
	auto t2 = t1 + partition;

	if(l <= r)
	{
		if(*t1 == key)
		{
			#ifdef DEBUG
			std::cout << ">>>>>>>>>>>>> found: " << *t1 << std::endl;
			#endif
			
			return t1;
		}
		else if(*t2 == key)
		{
			#ifdef DEBUG
			std::cout << ">>>>>>>>>>>>> found: " << *t2 << std::endl;
			#endif

			return t2;
		}
		else if(*t1 < key)
		{
			return ternary_r(key, ++t1, r);
		}
		else if(*t2 > key)
		{
			return ternary_r(key, l, --t2);
		}
		else
		{
			return ternary_r(key, ++t2, --t1);
		}

		#ifdef DEBUG
		for(auto i = t1; i < t2; ++i) std::cout << *i << " ";
		std::cout << std::endl;
		#endif
	}

	#ifdef DEBUG
	std::cout << ">>>>>>>>>>>>>>> not found: " << key << std::endl;
	#endif

	return r;
}

<<<<<<< HEAD:src/search.cpp
void generateDataset(int numberDatasets, std::vector<std::vector<long int>> & datasets)
{
	int i = 0, long int maxGen = 2**28;
	int initialSize = 1000;
	int nJump = (maxGen - 1000)/numberDatasets;

	datasets.resize(numberDatasets);

	for (int i = 0; i < numberDatasets; ++i)
	{  
		datasets[i].resize(initialSize);
		
		for (int j = 0; j < ; ++j)
		{
			datasets[i].push_back(j);

		}
		initialSize += nJump;
	}
}




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
=======
>>>>>>> upstream/master:src/searchs.cpp
