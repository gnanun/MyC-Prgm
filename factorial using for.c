#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("1");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    }
}
