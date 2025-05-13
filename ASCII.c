#include <stdio.h>
int main() {
    char ch;
    printf("Hi Gnanu!\n");
    printf("Enter any character (both upper and lower case): ");
    scanf("%c",&ch);
    printf("The ASCII value of %c is:%d",ch,ch);
    return 0;
}
