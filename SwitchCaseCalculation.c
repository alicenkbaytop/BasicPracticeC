#include <stdio.h>
int main()
{
	int n1, n2;
	int calculation;
	printf("Choose Process \n 1.Addition \n 2.Subtraction \n 3.Division \n 4.Multiplication \n 5.Exit \n");
	scanf("%d",&calculation);
	printf("Enter two numbers:");
	scanf("%d %d",&n1, &n2);
	
	switch(calculation)
	{
		case 1:
			printf("result is %d",n1+n2);
			break;
		case 2:
			printf("result is %d",n1-n2);
			break;
		case 3:
			printf("result is %d",n1/n2);
			break;
		case 4:
			printf("result is %d",n1*n2);
			break;				
		default:
			printf("Have a nice day...");	
	}
	return 0;
}
