#include <stdio.h>

int main() 
{
	int size;
	printf("Enter a number: ");
	scanf("%d",&size);
	int i, j;
	for (i=0; i<size; i++)
	{
		for (j=i; j>0; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
