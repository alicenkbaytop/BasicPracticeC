#include <stdio.h>

int addition(int n1, int n2)
{
	return n1+n2;
}
int subtraction(int n1, int n2)
{
	return n1-n2;
}
int division(int n1, int n2)
{
	return n1/n2;
}
int multiplication(int n1, int n2)
{
	return n1*n2;
}
int main()
{
	int n1, n2;
	printf("Enter two numbers:\n");
	scanf("%d %d", &n1, &n2);
	
	printf("addition is %d\n",addition(n1,n2));
	printf("subtraction is %d\n",subtraction(n1,n2));
	printf("division is %d\n",division(n1,n2));
	printf("multiplication is %d\n",multiplication(n1,n2));

	return 0;
}
