#include<stdio.h>
#include<math.h>
int main()
{
    int num,digi=0,rem,org;
    long int res=0;
    printf("Enter the value of num:");
    scanf("%d",&num);
    org=num;
    int temp=num;
    while(temp!=0)
    {
        temp/=10;
        digi++;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        res=res+pow(rem,digi);
        temp=temp/10;
    }
    if(org==res)
    printf("%d is a Armstrong number.",org);
    else
    printf("%d is not a Armstrong number.",org);
}
