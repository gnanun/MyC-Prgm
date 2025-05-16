#include<stdio.h>
int main()
{
    int n=6,a[10]={2,5,8,6,4,9},i;
    printf("\nThe entered array is:");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\nThe reversed array is:");
    for(i=n-1;i>=0;i--)
        printf("%3d",a[i]);
}
