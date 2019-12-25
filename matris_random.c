#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int random;
	int x, y;
	
	srand(time(0));
	
	printf("Enter your x and y: \n");
	scanf("%d %d", &x, &y);
	
	int list[x][y];
	
	for (int i = 0; i < x; i++)
	{
		for(int j = 0; j < y; j++)
		{
			random = rand()%10+1;
			printf("Matris %d X %d is %d \n",i,j,random);
		}
		printf("******************\n");
	}

	return 0;
}
