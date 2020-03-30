# Empirical Analysis


This project execute, mesuare the exectution time of search algorthims and generates a file with all samples executed. The Algorithms are: linear search, binary search, ternary search, jump search, fibonacci search, binary recursive search and ternary recursive search.

## Compiling and Running 

The project uses Cmake library to do a makefile, so make sure you have got it installed on your computer. To compile the code follow the steps below:

	1. $ mkdir build
	2. $ cd build
	2. $ cmake -G "Unix Makefiles" ..
	3. $ make 

	If everithing happend correctly, the user can type the amount of samples, 
	select the searchs to run or use the defaults values.

	To run wth the default samples and execute all searchs type inside the build folder:

	$./analyze

	to chosse the total of samples type and searchs to run:

	$./analyze the_input_size search1 .. search7

	the program aceppts as a valid input the first three letters of the algorithm name 
	and for the recursiver add '_r' in the end, so these are the valids 
	entrys: 'bin', 'ter', 'lin', 'fib', 'ter_r', 'bin_r'.

	**DO NOT FORGET TO TYPE THE SAMPLE TOTAL IF YOU CHOOSE TO RUN ESPECIF FUNCTIONS

##  Authors

Moísés Sousa Araújo & Bruna Hellen de Castro Dantas Barbosa
