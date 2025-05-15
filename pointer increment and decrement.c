#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int i;
    int *ptr=arr;
    printf("Pointer Increment\nPointer value is:");
    for(i=0;i<5;i++)
    {
        printf("%3d",*ptr);
        *ptr++;
    }
    printf("\nPointer Decrement\nPointer value is:");
    for(i=0;i<5;i++)
    {
        printf("%3d",*ptr);
        *ptr--;
    }
    return 0;
}
