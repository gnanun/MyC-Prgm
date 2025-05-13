#include <stdio.h>
int main() 
{
    int a;
    printf("hi Gnanu!\n");
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
    {
        printf("%d is divisible by both 3 and 5",a);
    }
    else
    {
        printf("%d is not divisible by 3/5 or both");
    }
    return 0;
}
