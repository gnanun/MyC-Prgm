#include <stdio.h>
int main() {
  int a, b;
  printf("Hi Gnanu!\n");
  printf("Enter the values of a and b:");
  scanf("%d%d", &a, &b);
  if (a > b) {
    printf("%d is large", a);
  } else {
    printf("%d is large", b);
  }
  return 0;
}
