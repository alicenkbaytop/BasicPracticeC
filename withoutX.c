#include <stdio.h>

int main()
{
	int n1, n2, total = 0;
	printf("Enter two numbers: \n");
	scanf("%d %d",&n1,&n2);
	
	for (int i = 1; i <= n2; i++)
	{
		total += n1;
	}
	printf("Result is %d",total);
	return 0;
}
