#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=85)
    {
        printf("Grade:A\n");
    }
    else if(marks>=70)
    {
        printf("Grade:B\n");
    }
    else if(marks>=50)
    {
        printf("Grade:C");
    }
    else if(marks>=35)
    {
        printf("Grade:D");
    }
    else
    {
        printf("Grade:F");
    }
    return 0;
}
