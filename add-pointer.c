#include<stdio.h>
int main()
{
    int a,b,c;
    int *p1,*p2;
    printf("Enter the two values:");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    c=*p1+*p2;
    printf("The Addition of two number %d and %d is %d",*p1,*p2,c);
    return 0;
}
