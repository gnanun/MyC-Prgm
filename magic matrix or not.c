#include<stdio.h>
#include<string.h>
int main()
{
    int arr[3][3],i,j;
    printf("Enter the elements of matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&arr[i][j]);
    int sum=0,some[3];
    for(i=0;i<3;i++)
    {
        sum=0;
    for(j=0;j<3;j++)
    {
        sum=sum+arr[i][j];
    }
    printf("%d\n",sum);
    
    some[i]=sum;

    }
    if(some[0]==some[1]&&some[1]==some[2])
        printf("it is magic matrix");
    else
        printf("it is not a magic mtrix.");
    
}
