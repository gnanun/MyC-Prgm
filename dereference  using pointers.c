#include<stdio.h>
int main()
{
    int a=20;
    int *ptr=&a;
    printf("a is:%d\n",*ptr);
    *ptr=30;
    printf("a is:%d\n",*ptr);
    *ptr=50;
    printf("a is:%d\n",*ptr);
}
