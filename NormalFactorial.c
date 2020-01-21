#include <stdio.h>

int main()
{
	int total = 1, fac, i;
	
	printf("Enter a step: \n");
	scanf("%d", &fac);
	
	for (i = 1; i <= fac; i++)
	{
		total *= i;
	}
	printf("Factorial %d is %d",i-1,total);
	return 0;
}
