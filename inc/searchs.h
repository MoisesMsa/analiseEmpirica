/**
 * @file searchs.h
 * @author     Moisés Sousa Araújo e Bruna Hellen de Castro Dantas Barbosa
 * @brief      File the searchs algorithms.
 */


#include <iostream>
#include <vector>
#include <functional>
#include <chrono>

using itr = std::vector<long int>::iterator;

/**
 * @brief      The functions peforms a iterative binary search on a given dataset
 *
 * @param[int]  key   the searched data
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */

itr binary(int, itr, itr);

/**
 * @brief      The functions peforms a fibonacci search on a given dataset
 *
 * @param[int]  key   the searched data
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */

itr fibonacci(int, itr, itr);

/**
 * @brief      The functions peforms a iterative ternary search on a given dataset
 *
 * @param[int]  key   the searched data
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr ternary(int key, itr l, itr r);
/**
 * @brief      The functions peforms a iterative linear search on a given dataset
 *
 * @param[int]  key   the searched data
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr linear(int key, itr l, itr r);

/**
 * @brief      The functions peforms a jump search on a given dataset
 *
 * @param[int]  key   the searched data
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr jump(int key, itr l, itr r);

/**
 * @brief      The functions peforms a recursive binary search on a given dataset
 *
 * @param[int]  key   the searched data
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr binary_r(int key, itr l, itr r);

/**
 * @brief      The functions peforms a ternay binary search on a given dataset
 *
 * @param[int]  key   the searched data
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a iterator to the end of the dataset if the element is 
 * not found or returns an iterator with the position of the found element  }
 */
itr ternary_r(int key, itr l, itr r);


