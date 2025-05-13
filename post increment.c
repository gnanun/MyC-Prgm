#include <stdio.h>
int main() {
    int a = 5, b;
    b = a++; 
    printf("After post increment:\na = %d\nb = %d\n", a, b);
    return 0;
}
