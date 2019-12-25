#include <stdio.h>
//By ACB
int fact(int n)
{
    if (n>=1)
    {
        return n*fact(n-1);    
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
} 

int main()
{
    int size, i;

    printf("Enter the element number of the Array(Factorial): \n");
    scanf("%d", &size);
    
    int arr[size];
    
    for (i = 0; i < size; i++)
    {   
       arr[i] = fact(i);
    }
    
    printf("Array %d equal to %d \n",i,fact(i));
    
    return 0;
}

