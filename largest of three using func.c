#include<stdio.h>
int a,b,c;
int large()
{
    if(a>b&&a>c)
    {
        return a;
    }
    else if(b>a&&b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{   
    printf("hi Gnanu!\n");
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    int result=large(a,b,c);
    printf("%d is large.",result);
}
