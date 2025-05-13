#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Hi Gnanu!\n");
    printf("Enter number of terms:");
    scanf("%d",&n);
    do
    {
        printf("%d ",i);
        i+=1;
    }
    while(i<=n);
    return 0;
}
