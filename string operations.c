#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("your name is:%s\n",name);
    int length=strlen(name);
    printf("String length is:%d\n",length);
    strcpy(name,"Hi Gnanu!");
    printf("your name is:%s\n",name);
    int comp=strcmp("rukki","shashi");
    printf("string comparision is:%d\n",comp);
    strcat(name," How are you.");
    printf("after concatenation your name is:%s\n",name);
}
