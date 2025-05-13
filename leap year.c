#include <stdio.h>
int main()
{
    int year,leap;
    printf("Hi Gnanu!\n");
    printf("Enter a year: ");
    scanf("%d", &year);
    leap=(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if(leap==1)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}
