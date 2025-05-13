#include <stdio.h>
int main()
{
  int mark;
  float percent;
  printf("Hi Gnanu!\n");
  printf("Enter your total marks and percentage:");
  scanf("%d%f", &mark, &percent);
  printf("Total marks is:%d\n", mark);
  printf("Percentage is:%.3f", percent);
  return 0;
}
