#include <stdio.h>
//By ACB
int fib(int n)
{
	if (n >= 2)
	{
		return fib(n-1) + fib (n-2);
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
