#include<stdio.h>
struct info{
    char grade;
};
struct student{
    char name[20];
    int usn;
    float avg;
    struct info i;
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
    printf("Enter your grade(P/F):");
    scanf("%s",&s.i.grade);
}
