#include <stdio.h>
typedef int I;
typedef float F;
typedef char Character;
typedef double Double;
int main() {
    printf("Size of int: %zu bytes\n", sizeof(I));
    printf("Size of float: %zu bytes\n", sizeof(F));
    printf("Size of char: %zu bytes\n", sizeof(Character));
    printf("Size of double: %zu bytes\n", sizeof(Double));

    return 0;
}