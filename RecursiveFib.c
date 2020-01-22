#include <stdio.h>
//By ACB
int fib(int n)
{
	if (n > 2)
	{
		return fib(n-1) + fib (n-2);
	}
	else if(n > 0 && n <= 2)
	{
		return 1;
	}
	else 
	{
		return printf("Error!!!!");
	}
}

int main()
{
	// first step is taken the 1.
	int n;
	printf("Enter a step for fibonacci: \n");
	scanf("%d", &n);
	printf("%d",fib(n));
	
	return 0;
}
