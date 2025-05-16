#include <stdio.h>
#include<math.h>
int main()
{
     int i,num,prime=1;
    printf("Enter the value of num:");
    scanf("%d",&num);
    if(num<=1)
        prime=0;
    int limit=(int)sqrt(num);
    for(i=2;i<=limit;i++)
        if(num%2==0)
            prime=0;
    
    if(prime)
         printf("%d is prime number.",num);
    else
         printf("%d is  not a prime number.",num);
    return 0;
}
