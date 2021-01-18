
// define max number of characters to read from the console
#define MAX 10

/*
* Example of using fgets()
*
* Course: DIT632
* Author: miroslaw.staron@gu.se
* (c) 2021
*/
int main_fgets(void) {

	char text[MAX],		// string to read in
		 in_text[MAX];	// the second string to read in (another text)

	// read the first text
	printf("\nEnter a text:");
	gets(text);

	// read another text
	printf("\nEnter a new text:");
	gets(in_text);

	// this line reads text, but can leave characters in the buffer
	// scanf(“%5s”,text);            // remaining characters still in buffer

	printf("\nThe first text is: %s ", text);
	printf("\nThe second text is: %s ", in_text);

	// Causes problem if you type in too many characters to in_text
	// use fgets( in_text, MAX,stdin);
	// leaves characters in buffer , use clearstdin();
	return(0);
}
