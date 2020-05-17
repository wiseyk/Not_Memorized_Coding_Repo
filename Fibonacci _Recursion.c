#include <stdio.h>

int fibo(int no, int a, int b)
{
    if(no==0)
    {
        printf(" %d ", a+b);
        return (a + b);
    }
    else
    {   
	// printf("\nCalling fibo(no = %d, a = %d, b = %d)",no-1, a+b, a );
        printf("%d,  ", a+b);
        return (fibo(no-1, a+b, a));
    }
}

int main(void) 
{
	// your code goes here
	int n;
	printf("Enter no. of terms to be printed : ");
	scanf("%d", &n);
	printf("\n\nThe Fibonacci series with %d terms : \n", n);
	int res = fibo(n-1, 0, 1);
	printf("\n\nThe last %d term is %d", n, res );
	return 0;
}
