#include<stdio.h>
int main()
{
    int a=10;
    int b=a;
    b=b+20;
    printf("Call by value\n");
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    
    int d=15;
    int *c=&d;
    *c=*c+20;
    printf("\ncall by reference\n");
    printf("d:%d\n",d);
    printf("*c:%d\n",*c);
    return 0;
}
