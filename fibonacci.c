/*
* Function which calculates fibonacci for an n-th number
* I use the function to demonstrate the concept of testing
* @param n - which fibonacci number to calculate
* @return - the n-th fibonacci number
*/
int fibonacci(int n)
{
	int iResult = 1;		// accumulator for the result

	// if statement, for the first two numbers are different (1, 2, 3, 5...)
	// the loop can be simplified, but the goal here is to make it readable
	if (n == 1)
		return iResult;
	else if (n == 2)
		return iResult + iResult; 
	else
		// recursive implementation
		// not the fastest, but the the simplest one
		return fibonacci(n-2) + fibonacci(n - 1);
}

/*
* Function that shows the basic testing principle -- assertion
* 
* @param a - the left-hand side number to compare
* @param b - the right-hand side number to compare
* @return - the result of the comparison: 1 if the same, 0 if not
*/
int ASSERT_TRUE(int a, int b)
{
	return (a == b);
}