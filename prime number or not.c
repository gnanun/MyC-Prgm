#include <stdio.h>
int main()
{
     int i,num,prime=1;
    printf("Enter the value of num:");
    scanf("%d",&num);
    if(num<=1)
        prime=0;
    for(i=2;i<=num/2;i++)
        if(num%2==0)
            prime=0;
    
    if(prime)
         printf("%d is prime number.",num);
    else
         printf("%d is  not a prime number.",num);
    return 0;
}
