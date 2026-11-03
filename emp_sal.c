#include<stdio.h>
int main()
{
    int emp_id,sal,da,hra;
    char name[20];
    float totsal;
    printf("Enter the Employee name:");
    scanf("%s",name);
    printf("Enter the employee id:");
    scanf("%d",&emp_id);
    printf("Enter the Salary:");
    scanf("%d",&sal);
    printf("Enter the values of DA and HRA :");
    scanf("%d %d",&da,&hra);
    totsal=sal+da+hra;
    printf("Total salary of the employee:%.2f",totsal);
    return 0;
}
