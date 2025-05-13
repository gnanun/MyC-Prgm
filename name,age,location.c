#include<stdio.h> 
int main() 
{ 
int age; 
char name [10],location[20]; 
printf("Enter your name:"); 
scanf("%s", &name); 
printf("Enter your age:"); 
scanf("%d",&age); 
printf("Enter your location:"); 
scanf("%s", &location); 
printf("\nName: \tAge:\tLocation:\n"); 
printf("%s\t %d\t     %s\n", name, age, location); 
return 0; 
} 
