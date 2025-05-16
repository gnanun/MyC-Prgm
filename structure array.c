#include<stdio.h>
struct student{
    char name[20];
    int usn;
    float avg;
};
int main()
{
    int i;
    struct student s[3];
    for(i=0;i<3;i++)
    {
    printf("Enter your name:");
    scanf("%s",&s[i].name);
    printf("Enter your usn:");
    scanf("%d",&s[i].usn);
    printf("Enter your average marks:");
    scanf("%f",&s[i].avg);
    }
}
