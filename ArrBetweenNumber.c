#include <stdio.h>
//By ACB
int main()
{
	int n1, n2;
	printf("For example n1-n2: \n");
	scanf("%d %d", &n1, &n2);
	
	int arr1[n2];
	
	for (n1; n1 < n2; n1++)
	{
		if (n1 % 2 == 1)
		{
			arr1[n1] = n1;
			printf("Array %d equal to %d\n",arr1[n1],n1);
		}	
	}
	return 0;
}
