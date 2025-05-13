#include <stdio.h>
int main() 
{
    int r;
    float pi = 3.14, area;
    printf("Hi Gnanu!\n");
    printf("Enter the radius of circle:");
    scanf("%d", &r);
    area = pi * r * r;
    printf("The area of Circle is:%.2f", area);
    return 0;
}
