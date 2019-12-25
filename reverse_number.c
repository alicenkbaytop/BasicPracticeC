#include <stdio.h>

int main() 
{
	int a[4] = {4,5,2,1};
	int b[4];
	
	for (int i = 0; i < 4; i++)
	{
		b[3-i] = a[i];
	}
		
	for (int i = 0; i < 4; i++)
	{
		printf("%d",b[i]);
	}	
	return 0;
}
