#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

int front = 0, rear = -1;
char queue[SIZE];
bool isEmpty() {
    return front > rear;
}
bool isFull() {
    return rear == SIZE - 1;
}
char get_front() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return '\0';
    }
    return queue[front];
}
char get_rear() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return '\0';
    }
    return queue[rear];
}
void enqueue(char data){
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    rear = rear + 1;
    queue[rear] = data;
}
char dequeue() {
    if (isEmpty() ) {
        printf("Queue is empty\n");
        return '\0'; 
    }
    char data = queue[front];
    front = front + 1;
    return data;
}
void print_queue(char *queue, int front, int rear) {
    if (isEmpty() ) {
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

    printf("Front: %c\n", get_front());
    printf("Rear: %c\n", get_rear());
    printf("Is queue empty? %s\n", isEmpty() ? "Yes" : "No");
    printf("Is queue full? %s\n", isFull() ? "Yes" : "No");

    return 0;
}