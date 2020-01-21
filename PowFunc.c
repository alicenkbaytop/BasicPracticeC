#include <stdio.h>
#include <math.h>

int main()
{
	int n1, n2;
	printf("Enter two numbers for power: \n");
	scanf("%d %d",&n1,&n2);
	int result = pow(n1,n2);
	printf("Result is %d",result);
	return 0;
}
