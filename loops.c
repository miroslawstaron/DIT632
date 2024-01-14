// Include section
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// Define section
#define MAX 5   // defines the number of numbers to generate

// Main program section

/**
* This program demonstrates the use of random number generator
* and the basic calculations in C
* 
* Purpose: Demonstration of comments and program logic
* DIT633
* 
* Author: Miroslaw Staron, 2021
* 
**/ 
int main_loops()
{
    // variable declarations
    int n,              // index of the loop
        number[MAX];    // array with the numbers to generate
    
    int sum = 0,            // initialization of the sum
        max_num = -32768;   // initialization of the max which is any negative number 
                            // to be sure that we never use this initial value as maximum

    float average;          // average value; note that this is a different type, as the average does not need to be an integer

    // program logic 

    // we set the seed of the random generator
    srand(42);

    puts("\n Creating a table of integers...");

    // the main loop where we generate the random numbers
    // note that the index is now initialized
    // and that we use the defined MAX value as the stop condition
    for (n = 0; n < MAX; n++) {

        // generating the n-th number
        number[n] = rand() % 100;

        // printing the n-th index and the generated number
        printf("\n Integer nr %d are %d.", 
               n, 
               number[n]);

        // make a sum of the numbers
        sum = sum + number[n];
    }

    // calculate the average of the numbers generated
    // Note! this is why we need the number n to be declared outside of the for loop
    average = (float)sum / n;

    // finally, printing the result
    printf("\n\n %s = %f ", "Average", average);

    // and leaving the program
    return (0);
}