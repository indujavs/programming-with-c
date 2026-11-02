#include<stdio.h>
int main()
{
    int id,m1,m2,m3;
    char name[20];
    float tot,avg;
    printf("Enter the Student Name:");
    scanf("%s",name);
    printf("Enter the Student ID:");
    scanf("%d",&id);
    printf("Enter the marks:");
    scanf("%d %d %d",&m1,&m2,&m3);
    tot=m1+m2+m3;
    avg=tot/3;
    printf("Total:%.2f\n",tot);
    printf("Average:%.2f\n",avg);
    return 0;
}
