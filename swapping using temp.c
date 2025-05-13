#include <stdio.h>
int main() 
{
    int a,b,temp;
    printf("hi Gnanu!\n");
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("A is:%d\n",a);
    printf("B is:%d",b);
    return 0;
}
