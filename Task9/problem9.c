#include <stdio.h>
#define SIZE 5

int front = 0, rear = -1;
char queue[SIZE];

void enqueue(char data){
    if (rear == SIZE -1) {
        printf("Queue is full\n");
        return;
    }
    rear = rear + 1;
    queue[rear] = data;
}
char dequeue() {
    if (front > rear) {
        printf("Queue is empty\n");
        return '\0'; 
    }
    char data = queue[front];
    front = front + 1;
    return data;
}
void print_queue(char *queue, int front, int rear) {
    if (front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%c ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue('A');
    enqueue('B');
    enqueue('C');
    print_queue(queue, front, rear);
    char deleted_element = dequeue();
    printf("Dequeued: %c\n", deleted_element);
    print_queue(queue, front, rear);

    return 0;
}