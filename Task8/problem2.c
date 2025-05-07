#include <stdio.h>
#define add(a, b) ((a) + (b))
//#define sub(a, b) ((a) - (b))  
 

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    #ifdef add
    printf("sum= %d\n", add(a, b));
    #endif

    #ifdef sub
    printf("Subtraction= %d\n", sub(a, b));
    #endif
    
   

    return 0;
}