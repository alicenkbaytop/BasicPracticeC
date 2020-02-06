#include <stdio.h>
//By ACB
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
	int add = addition(n1,n2);
	int sub = subtraction(n1,n2);
	int div = division(n1,n2);
	int mul = multiplication(n1,n2);
	
	printf("addition is %d\n",add);
	printf("subtraction is %d\n",sub);
	printf("division is %d\n",div);
	printf("multiplication is %d\n",mul);

	return 0;
}
