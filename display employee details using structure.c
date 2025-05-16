#include<stdio.h>
struct employee{
    char name[20];
    int id;
    float salary;
};
int main()
{
    int i;
    struct employee e[5];
    printf("Enter details of Employee:\n\n");
    for(i=0;i<5;i++)
    {
    printf("Enter Employee %d name:",i+1);
    scanf("%s",&e[i].name);
    printf("Enter Employee %d  ID:",i+1);
    scanf("%d",&e[i].id);
    printf("Enter Employee %d  salary:",i+1);
    scanf("%f",&e[i].salary);
    }
    printf("============EMPLOYEE DETAILS============");
    printf("\n%-15s %-10s %-10s\n","Name","ID","Salary(₹)");
    for(i=0;i<5;i++)
    {
        printf("\n%-15s %-10d %-10f",e[i].name,e[i].id,e[i].salary);
    }
}
