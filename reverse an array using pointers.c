#include<stdio.h>
int main()
{
    int n=6,arr[10]={1,2,3,4,5,6},i;
    int *start,*end,temp;
    start=arr;
    end=arr+n-1;
    printf("\nThe entered array is:");
    for(i=0;i<n;i++)
        printf("%3d",arr[i]);
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        *start++;
        *end--;
    }
    printf("\nThe reversed array is:");
    for(i=0;i<n;i++)
        printf("%3d",arr[i]);
}
