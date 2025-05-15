#include<stdio.h>
int main()
{
    int num,res=0,rem,org;
    printf("Enter the value of num:");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        res=res+rem*rem*rem;
        num=num/10;
    }
    if(org==res)
    printf("%d is a Armstrong number.",org);
    else
    printf("%d is not a Armstrong number.",org);
}
