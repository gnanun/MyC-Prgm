#include<stdio.h>
int main()
{
    int amt,Time;
    float roi,SI;
    printf("Enter the  principle amount:");
    scanf("%d",&amt);
    printf("Enter time(in years):");
    scanf("%d",&Time);
    printf("Enter rate of interest:");
    scanf("%f",&roi);
    SI=(amt*Time*roi)/100;
    printf("Simple interest is:%.2f\n",SI);
    
    return 0;
}
