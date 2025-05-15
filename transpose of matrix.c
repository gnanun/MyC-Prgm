#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],sum[5][5],m,n,p,q,i,j,k;
    printf("Enter the order of matrix A:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix A:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    printf("matrix a is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
     printf(" transpose of matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%6d",a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
