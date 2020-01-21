#include <stdio.h>
//By ACB
int main()
{
	int total = 0, size=1000, i;
	int arr[size];
	for (i = 0; i < size; i++)
	{
		printf("Enter your number: \n");
		scanf("%d",&arr[i]);
	}
	
	for (i = 0; i < size; i++)
	{
		total += arr[i];
	}
	printf("Total average is %d",total/size);
	return 0;
}
