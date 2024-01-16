// Include section
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


/*
* Program that integrates all parts from Lecture 1
* 
* Course: DIT633
* Author: miroslaw.staron@gu.se
* (c) 2021
*/

int main(int argc, char *argv[])
{
	// let's check if the program works at all
	// printf("Number of program arguments: %d\n", argc);

	
	// the first argument
	// printf("The first argument %s and the second %s %s\n", argv[0], argv[1], argv[2]);

	// Execute the examples with the loops
	// generating random numbers
	// main_loops();

	// examples of reading and printing values
	// on the console
	main_inout();

	// examples or reading using getchar()
	// main_getch();

	// examples with fgets()
	// main_fgets();

	// example of an assertion, i.e. the basics of a unit test
	// printf("Assert: %s\n", ASSERT_TRUE(12, fibonacci(6)) ? "TRUE" : "FALSE");

	return 0;
}