#include <stdio.h>
int main() {
  int a, b, res, ch;
  printf("Hi Gnanu!\n");
  printf("Enter the values of a and b:");
  scanf("%d%d", &a, &b);
  printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
  printf("Enter your chioce:");
  scanf("%d", &ch);
  switch (ch) {
    case 1:
      res = a + b;
      printf("Sum is:%d", res);
      break;
    case 2:
      res = a - b;
      printf("Difference is:%d", res);
      break;
    case 3:
      res = a * b;
      printf("Product is:%d", res);
      break;
    case 4:
      res = a / b;
      printf("Quotient is:%d", res);
      break;
    default:
      printf("Enter valid choice");
      break;
  }
  return 0;
}
