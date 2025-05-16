#include<stdio.h>
struct employee{
    char name[20];
    int id;
    float salary;
};
int main()
{
    int i;
    struct employee e[3];
    printf("Enter details of Employee:\n\n");
    for(i=0;i<3;i++)
    {
    printf("Enter Employee %d name:",i+1);
    scanf("%s",&e[i].name);
    printf("Enter Employee %d ID:",i+1);
    scanf("%d",&e[i].id);
    printf("Enter Employee %d salary:",i+1);
    scanf("%f",&e[i].salary);
    printf("\n");
    }
    int sum=0,avg;
    for(i=0;i<3;i++)
    {
        sum=sum+e[i].salary;
    }
    avg=sum/3;
    printf("\nAverage salary of employees is:%d",avg);
}
