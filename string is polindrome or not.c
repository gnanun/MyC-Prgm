#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100],rev[100];
    int i,len,polindrome=1;
    printf("Enter the string:");
    scanf("%s",&arr);
    len=strlen(arr);
    for(i=0;i<len;i++)
    rev[i]=arr[len-1-i];
    for(i=0;i<len;i++)
    if(arr[i]!=rev[i])
    {
        polindrome=0;
        break;
    }
    if(polindrome)
    printf("polindrome");
    else
    printf("not polindrome");
}
