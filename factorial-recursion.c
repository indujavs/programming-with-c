#include<stdio.h>
long int fact(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
    return 0;
}
    long int fact(int n)
    {
     if(n>=1)
       return n*fact(n-1);
     else 
       return 1;
    }
