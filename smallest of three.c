#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("Hi Gnanu!\n");
    printf("Enter the values of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    {
        printf("%d is smaller",a);
    }
    else if(b<c&&b<a)
    {
        printf("%d is smaller",b);
    }
    else
    {
        printf("%d is smaller",c);
    }
    return 0;
}
