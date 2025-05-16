#include<stdio.h>
struct student{
    char name[20];
    int usn;
    float avg;
};
int main()
{
    int i;
    struct student s;
    printf("Enter your name:");
    scanf("%s",&s.name);
    printf("Enter your usn:");
    scanf("%d",&s.usn);
    printf("Enter your average marks:");
    scanf("%f",&s.avg);
}
