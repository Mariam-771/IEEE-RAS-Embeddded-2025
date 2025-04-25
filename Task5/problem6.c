#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Math Error\n");
        return 0; 
    }
}

int main() {
    int choice, num1, num2;
    int (*operation)(int, int);

    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");        
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
 

    switch(choice){
        case 1:
        operation = add;
        break;  
        case 2:
        operation = subtract;    
        break;
        case 3:
        operation = multiply;
        break;
        case 4:
        operation = divide;
        break;
        default:
        printf("Invalid choice\n"); 
        return 1; 
    }
    int result = operation(num1, num2);
    printf("Result: %d\n", result);

    return 0;
}