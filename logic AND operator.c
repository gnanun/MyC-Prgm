#include <stdio.h>
int main() {
  int a, b;
  printf("Hi Gnanu!\n");
  printf("Enter the values of a and b:");
  scanf("%d%d", &a, &b);
  if (a >0 && b>0)
  {
      printf("Both numbers are positive");
  }
   else if(a>0 &&b<0)
   {
       printf("%d is negetive.",b);
      
   }
   else if(a<0&&b>0)
   {
       printf("%d is negetive.",a);
      
   }
   else
   {
       printf("Both are negetive.");
   }
  
  return 0;
}
