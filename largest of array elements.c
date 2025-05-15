#include<stdio.h>
int n=10,i,sum=0,large=0;
int largest()
{ 
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        if(large<arr[i])
           large=arr[i];
    return large;
}

int main()
{
    printf("hi Gnanu!\n");
    printf("Enter 10 elements to array:");
    
    int res=largest();
   printf("largest of all elements is:%d",res);
    return 0;
}
