#include <stdio.h>
enum operations { add=43, sub=45, multi=42, div=47, mod=37, and=38, or=124, not=33};


int main() {
    int a, b, reault;
    scanf("%d", &a);
    scanf("%d", &b);
    char op;
    scanf(" %c", &op);

    switch (op) {
        case add:
        printf("Reasult = %d\n", a+b);
        break;
        case sub:
        printf("Reasult = %d\n", a-b);
        break;
        case multi:
        printf("Reasult = %d\n", a*b);
        break;
        case div:       
        printf("Reasult = %d\n", a/b);
        break;
        case mod:
        printf("Reasult = %d\n", a%b);
        break;
        case and:
        printf("Reasult = %d\n", a&b);
        break;
        case or:
        printf("Reasult = %d\n", a|b);
        break;
        case not:
        printf("Reasult = %d\n", !a);
        break;
        default:
        printf("Invalid operation\n");
        break;
    }


    return 0;
}