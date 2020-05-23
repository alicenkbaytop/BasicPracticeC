#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* random bir sekilde kullanıcı kac deger secerse o kadar degerin histogrami ekrana gelecek
histogram, veri dagiliminin sutun grafigi ile gosterimidir*/
//By ACB
int main()
{
	srand(time(NULL));
	int size, i, j;
	
	printf("Please enter a size: \n");
	scanf("%d", &size);
	printf("------------------------------------------------\n");
	
	int arr[size];
	for (i = 0; i < size; i++)
	{
		arr[i] = (rand() % 20 +1); 
	}
	
	printf("%s %12s %16s\n","Element","Value","Histogram");
	
	for(i = 0; i < size; i++)
	{
		printf("%d %15d           ",i,arr[i]);
		
		for(j = 1; j <= arr[i]; j++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
	return 0;
}
