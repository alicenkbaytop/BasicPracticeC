#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//bin kere zar atildiginda her bir yuzun kac kere gelecegini hesaplayan program
#define size 7
#define times 1000
//By ACB 
int main()
{
	srand(time(NULL));
	
	int face, i;
	int dice[size]={0};
	
	for (i = 1; i <= times; i++)
	{
		face = (rand() % 6) + 1;
		++dice[face];
	}
	
	printf("%s %10s\n","Face","Times");
	
	for (i = 1; i < size; i++)
	{
		printf("%d %11d\n",i,dice[i]);
	}
	return 0;
}
