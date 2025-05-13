#include<stdio.h>
int add(int a,int b)   //function declaration
{
    int c=a+b;  //function defination
    return c;
    
}
int main()
{
    int result=add(15,5);    //function calling
    printf("Result is:%d",result);
}
