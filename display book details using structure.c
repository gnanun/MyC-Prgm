#include<stdio.h>
struct books{
    char name[20];
    int edition;
    char genre[20];
    char author[20];
};
int main()
{
    int i;
    struct books b[20];
    for(i=0;i<5;i++)
    {
    printf("Enter details for Book %d\n", i + 1);
    printf("Enter book name:");
    scanf("%s",&b[i].name);
    printf("Enter author of book:");
    scanf("%s",&b[i].author);
    printf("Enter the edition:");
    scanf("%d",&b[i].edition);
    printf("Enter book gnere:");
    scanf("%s",&b[i].genre);
    }
     printf("======================= BOOK DETAILS =======================\n");
    printf("%-20s %-15s %-10s %-15s\n", "Book Name", "Author", "Edition", "Genre/Type");
    printf("------------------------------------------------------------\n");

    for(i=0;i<5;i++)
    {
        printf("%-20s %-15s %-10d %-15s\n", b[i].name, b[i].author, b[i].edition, b[i].genre);
    }

    return 0;
}
