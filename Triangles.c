#include <stdio.h>
//By ACB
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % 2 == 1)
			{
				printf("*");
			}
			else 
			{
					printf("%d",j);
				
			}
		}
		printf("\n");
	}
	return 0;
}
