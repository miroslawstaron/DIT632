/*
* Function which calculates fibonacci for an n-th number
* I use the function to demonstrate the concept of testing
*/
int fibonacci(int n)
{
	int iResult = 1;

	if (n == 2)
		return iResult + 1;
	else if (n == 1)
		return iResult; 
	else
		return fibonacci(n-2) + fibonacci(n - 1);
}

/*
* Function that shows the basic testing principle -- assertion
*/
int ASSERT_TRUE(int a, int b)
{
	return (a == b);
}