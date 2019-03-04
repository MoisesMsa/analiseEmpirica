#include <iostream>
#include <vector>

using itr = std::vector<long int>::iterator;


itr binary(int, itr, itr);
itr fibonacci(int, itr, itr);
itr ternary(int key, itr l, itr r);
itr jump(int key, itr l, itr r);
itr linear(int key, itr l, itr r);

int generateFib(itr , itr);



void fibonacci_r();
void linear_r();
void binary_r();
void jump_r();
void ternary_r();

// void saveTime(double, std::vector<double>);

// void writeData(std::vector<double> &);

