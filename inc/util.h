/**
 * @file util.h
 * @author Moisés Sousa Araújo e Bruna Hellen de Castro Dantas Barbosa 
 * @brief File with the execution helpers, debug.
 *
 */

#include "searchs.h"
#include <string>
#include <fstream>
#include <iomanip>


/**
 * @brief   The function recives the left and right positions to calc the distance and returns the neartest fibonacci's number.  
 *
 * @param[itr]  l     { iterator to the begin of the dataset }
 * @param[itr]  r     { iterator to the end of the dataset }
 *
 * @return     { returns a fibonacci number  }
 */

int generateFib(itr , itr);


/**
 * @brief   The function recives a int that indicates the maximum value. 
 * supported by the machine and allocate the std::vector<long int> dataset;
 *
 * @param[int]  datasize     { value to allocate }
 *
 */
void data_fill(int);

/**
 * @brief   The function returns the dataset grow rate using the calculus: ([maximum datasize] - 1000)/[sample total].
 *
 * @param[int]  sample     { the amount of samples to generate }
 * @param[int]  datasize   { the datasize value }
 *
 * @return { integer, the grow rate }
 *
 */

int grow_tax(int, int);

/**
 * @brief The function makes a progressive average of 100 searchs iterations and avoid rouding problems with double
 * the callc is: [average] = [previous average] + ([previous average] - [current time])/[nth iteration]
 * 
 * @param[double]  last_avg     { the_previous avg calculeted by the function }
 * @param[double]  current_time   { the last calculation runtime }
 * @param[int]  k   { nth iteration }
 *
 * @return { the preogressiive runtime }
 *
 */

double calc_avg(double, double, int);


/**
 * @brief  Recive the average of one hundred search exectuions and stores it in std::vector<double> time_avg.
 *
 * @param[double]  avg     { the caculeted average n calc_avg() }
 *
 *
 */

void save_avg(double);

/**
 * @brief Save the sample size in std::vector<int> input_size.
 *
 * @param[int]  size     { the total elements that a search can acess in the dataset vector }
 *
 *
 */

void save_input_size(int);

/**
 * @brief Copy the default labels vector in std::vector<std::string> searchs_labels.
 *
 * @param[std::vector<std::string>]  labels  { the search name }
 *
 *
 */

void add_label(std::vector<std::string>);


/**
 * @brief Ovewrites add_label(std::vector<std::string>) to stores indiviual labels of the searchs selected 
 * by the user in std::vector<std::string> searchs_labels.
 *
 * @param[std::vector<std::string>]  labels  { the search name }
 *
 *
 */

void add_label(std::string);

/**
 * @brief This function is the program's core, here the searchs are called by a function pointer, 
 * the persintence funtions works here too, the execution time is measured and when all samples are ready 
 * the output file is created.
 *
 * @param[std::vector<std::function<itr(int,itr,itr)> >]  searchs  { the function pointers vector }
 * @param[int]  key  { value to search in dataset }
 * @param[int]  sample_total  { total of samples }
 * @param[int]  grow_rate  { the dataset accessible size }
 *
 *
 */

void run_search(std::vector<std::function<itr(int,itr,itr)> >, int, int, int);

/**
 * @brief This function get all stored values and writes a file in '/output' dir. 
 * If there is just one search function the file name is the function label, else is 'analyze_output.plt'.
 */

void writeData();

/**
 * @brief Function to debug the data vectors.
 *
 */

void print();
