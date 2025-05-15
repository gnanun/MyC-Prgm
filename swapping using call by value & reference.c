#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("Before swapping.\na=%d\nb=%d\n",a,b);
    printf("swapping using call by value:\n");
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapping using call by reference:\n");
    int *ptr1=&a;
    int *ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("a=%d\nb=%d\n",*ptr1,*ptr2);
}
