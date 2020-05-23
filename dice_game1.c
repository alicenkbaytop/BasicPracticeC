#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//eger cift sayi gelirse kazandin, eger tek sayi gelirse kaybettin oyunu

enum Status {WON, LOST};
//By ACB
int throwDice(void);

int main(void)
{
	int sum;
	
	enum Status gameStatus;
	
	srand(time(NULL));
	
	sum = throwDice();
	
	switch(sum)
	{
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
			gameStatus = WON;
			break;
		
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
			gameStatus = LOST;
			break;				
	}	

	if(gameStatus == WON)
	{
		printf("Player Wins\n");
	}
	else
	{
		printf("Player Loses\n");
	}
	return 0;
}

int throwDice(void)
{
	int dice1 = rand() % 6 +1;
	int dice2 = rand() % 6 +1;
	int workSum = dice1 + dice2;
	
	printf("Player %d + %d = %d\n",dice1, dice2, workSum);
	
	return workSum;
}
