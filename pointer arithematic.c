#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5},i;
    int *ptr=arr;
    for(i=0;i<5;i++)
    {
        printf("Value:%d\nAddress :%d\n",*(ptr+i),ptr+i);
    }
} 
