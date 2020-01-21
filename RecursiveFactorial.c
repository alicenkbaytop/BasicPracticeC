#include <stdio.h>

int fac(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n* fac(n-1);	
	}
}

int main()
{
	int n;
	printf("Enter a number for factorial: \n");
	scanf("%d",&n);
	
	printf("Factorial %d is %d",n,fac(n));
	return 0;
}
