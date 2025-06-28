#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

int stack_arr[MAX_SIZE];
int top = -1; 

void push(int element) {
    if(top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return; 
    }
    top = top + 1;
    stack_arr[top] = element;
}

int pop() {
    if (top == -1) {
        printf("Stack empty\n");
        exit(1); 
    }
    int element = stack_arr[top];
    top = top -1;
    return element;
}

void print_stack(int *stack, int top) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int delete_element;
    push(10);
    push(20);
    push(30);
    print_stack(stack_arr, top);
    delete_element = pop();
    printf("Deleted element: %d\n", delete_element);
    print_stack(stack_arr, top);
    
    return 0;
}