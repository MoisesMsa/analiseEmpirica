#include <iostream>
#include <vector>
#include <functional>
#include <chrono>

using itr = std::vector<long int>::iterator;



itr binary(int, itr, itr);
itr fibonacci(int, itr, itr);
itr ternary(int key, itr l, itr r);
itr jump(int key, itr l, itr r);
itr linear(int key, itr l, itr r);
itr binary_r(int key, itr l, itr r);
itr ternary_r(int key, itr l, itr r);

int generateFib(itr , itr);

void run_search(std::function <itr (int, itr, itr) > search, int ,int );

void fill_data(int);
void print_time();

// void saveTime(double, std::vector<double>);

// void writeData(std::vector<double> &);

