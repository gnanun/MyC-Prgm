#include <stdio.h>
int main() {
  int len, wid, area;
  printf("Hi Gnanu!\n");
  printf("enter the length and width of rectangle:");
  scanf("%d %d", &len, &wid);
  area = len * wid;
  printf("Area of rectangle is:%d", area);
  return 0;
}
