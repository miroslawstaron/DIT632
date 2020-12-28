#include <stdio.h>
#include <stdlib.h>

// This is the first program
//and the use of the pointers and memory allocation
void main(void)
{
	char* pPointer = NULL; 

	pPointer = (char *) malloc(5);

	strcpy(pPointer, "test");

	printf("%s", pPointer);

	free(pPointer);
}
