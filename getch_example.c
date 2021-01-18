#include <stdio.h>

#define MAX 20

// Clear buffer 
// This function is necessary to get rid of the \n signs 
// which can be in the buffer
void clearstdin(void) {
	char temp;
	while ((temp = getchar()) != '\n');
}

/*
* This program demonstrates the usage of getchar and gets
* It also shows how important it is to clear the buffer
* 
* DIT632, Lecture 1
* Author: miroslaw.staron@gu.se
*/
int main(void) {
	
	// variable declaration
	int n = 0;		// index of the last position in the string

	char c,			// single character from the console
		text[MAX];  // string which we read from the console, char by char

	// asking the user to enter the text
	printf("\nEnter a text: ");

	// and reading it one by one, until the user hits enter (\n)
	// Note! Please take a look at the brackets in the while condition
	// if you want to, remove some of them and see what happens
	// in most cases the program will compile, but the results will be very different
	while ((c = getchar()) != '\n') {

		// adding the character that is read by getchar() to the string
		text[n] = c;

		// and updating the string's position
		n++;
	}

	// after the loop, we add the 0 to the string to mark its end
	text[n] = '\0';

	// and we print the text on the console
	printf("\nYou entered: %s\n ", text);

	// asking for another text
	printf("\nEnter a new text:  ");

	// and reading it
	scanf("%5s", text);

	// printing out the text
	printf("\nYou entered: %s\n ", text);

	// clearing the buffer
	// it is important as the last character is the \n
	// which will directly end the "gets" function
	// please experiment by commenting this line
	clearstdin();

	// read the string using gets
	gets(text);

	// and printing it on the console using puts
	puts(text);

	return (0);
}