#include<stdio.h>
int main()
{
    int i,arr[100],sum=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
