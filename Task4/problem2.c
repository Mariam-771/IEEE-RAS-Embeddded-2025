#include <stdio.h>

int main() {
    int a, b, *ptr1 = &a, *ptr2 = &b;

    printf("num1: ");
    scanf("%d", &a);
    printf("num2: ");
    scanf("%d", &b);
    printf("\n");

    int sum = *ptr1 + *ptr2;
    int diff = *ptr1 - *ptr2;
    int prod = *ptr1 * *ptr2;
    int quot = *ptr1 / *ptr2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);

    
    return 0;
}