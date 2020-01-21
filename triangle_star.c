#include <stdio.h>
//By ACB
int main() 
{
	printf("Enter row number: ");
	int row;
	scanf("%d", &row);
	
	int i, j;
	for (i=1; i<=row; i++)
	{
		for (j=1; j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
