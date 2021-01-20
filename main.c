// Include section
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
* Program that integrates all parts from the lecture
* 
* Course: DIT632
* Author: miroslaw.staron@gu.se
* (c) 2021
*/
void main(void)
{
	// Execute the examples with the loops
	// generating random numbers
	//main_loops();

	// examples of reading and printing values
	// on the console
	//main_inout();

	// examples or reading using getchar()
	//main_getch();

	// examples with fgets()
	//main_fgets();

	printf("F: %d\n", fibonacci(6));

	printf("Assert: %s\n", ASSERT_TRUE(13, fibonacci(6)) ? "TRUE" : "FALSE");
}