#include <iostream>
#include <vector>
#include <functional>
#include <chrono>

using itr = std::vector<long int>::iterator;

/**
 * @brief      The functions peforms a iterative binary search on a given dataset
 *
 * @param[in]  key   the searched data
 * @param[in]  l     { iterator to the begin of the dataset }
 * @param[in]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr binary(int, itr, itr);

/**
 * @brief      The functions peforms a fibonacci search on a given dataset
 *
 * @param[in]  key   the searched data
 * @param[in]  l     { iterator to the begin of the dataset }
 * @param[in]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr fibonacci(int, itr, itr);

/**
 * @brief      The functions peforms a iterative ternary search on a given dataset
 *
 * @param[in]  key   the searched data
 * @param[in]  l     { iterator to the begin of the dataset }
 * @param[in]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr ternary(int key, itr l, itr r);

/**
 * @brief      The functions peforms a jump search on a given dataset
 *
 * @param[in]  key   the searched data
 * @param[in]  l     { iterator to the begin of the dataset }
 * @param[in]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr jump(int key, itr l, itr r);

/**
 * @brief      The functions peforms a iterative linear search on a given dataset
 *
 * @param[in]  key   the searched data
 * @param[in]  l     { iterator to the begin of the dataset }
 * @param[in]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr linear(int key, itr l, itr r);

/**
 * @brief      The functions peforms a recursive binary search on a given dataset
 *
 * @param[in]  key   the searched data
 * @param[in]  l     { iterator to the begin of the dataset }
 * @param[in]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr binary_r(int key, itr l, itr r);

/**
 * @brief      The functions peforms a recursive binary search on a given dataset
 *
 * @param[in]  key   the searched data
 * @param[in]  l     { iterator to the begin of the dataset }
 * @param[in]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr ternary_r(int key, itr l, itr r);


<<<<<<< HEAD:src/search.h
/**
 * @brief      { function_description }
 *
 * @param[in]  <unnamed>  { parameter_description }
 * @param[in]  <unnamed>  { parameter_description }
 *
 * @return     { description_of_the_return_value }
 */
int generateFib(itr , itr);

//void run_all();

/**
 * @brief      { function_description }
 *
 * @param[in]  numberDatasets  The number datasets
 * @param      datasets        The datasets
 */
void generateDataset(int numberDatasets, std::vector<std::vector<long int>> & datasets);
// void saveTime(double, std::vector<double>);

// void writeData(std::vector<double> &);
=======
>>>>>>> upstream/master:inc/searchs.h

