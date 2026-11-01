#include<stdio.h>
int main()
{
    int i=1,j=1,n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        do
        {
        a=i*j;
        printf("%4d",a);
        j++;
        }
        while(j<=n);
        printf("\n");
        i++;
        j=1;
    }
    while(i<=10);
    return 0;
}
