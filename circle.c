#include<stdio.h>
int main()
{
    float r,pi=3.14,area;
    printf("Enter the radius:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area of Circle:%.2f",area);
    return 0;
}
