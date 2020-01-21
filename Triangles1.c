#include <stdio.h>

int main()
{
	int row;
	printf("Enter a row number: \n");
	scanf("%d", &row);
	
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % 3 == 0)
			{
				printf(" %d ",j);
			}
			else 
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	return 0;
}
