#include<stdio.h>
int main()
{
    int n=5,a[n],b[n],i,j;
    printf("Enter elements of an array:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[(n-1)-i]=a[i];
    printf("\nThe entered array is:");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\nThe reversed array is:");
    for(i=0;i<n;i++)
        printf("%3d",b[i]);
}
