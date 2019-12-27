#include <stdio.h>

int max(int arr[], int len)
{
	int maximum = arr[0];

	for (int i = 1; i < len; i++)
	{
		if(arr[i]> maximum)
		{
		maximum = arr[i];
		}
	}
	return maximum;
}

int main()
{
	int numbers[] = {10,23,24,60,99,34};

	int size = sizeof(numbers) / sizeof(numbers[0]);
	
	int result = max(numbers,size);

	printf("The largest element is %d",result);

	return 0;
}
