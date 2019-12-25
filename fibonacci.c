#include <stdio.h>

int fib(int n)
{
	if(n >= 1)
	{
		return fib(n-1) + fib(n-2);
	}
	
	else if(n == 0)
	{
		return 1;
	}
	
	else 
	{
		return 0;
	}
}

int main()
{
	int i, size;
	
	printf("Enter a step: \n");
	scanf("%d", &size);
	
	int arr[size];
	
	for(i = 0; i < size; i++)
	{
		arr[i] = fib(i);
		printf("%d\t", arr[i]);
	}

	return 0;
}
