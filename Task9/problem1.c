#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};


void Count_and_print_LL(struct node *head){
    int count =0;
    struct node *ptr;
    if( head == NULL){
        printf("Linked List is Empty\n");
    }
    printf("Linked List: ");
    ptr = head;
    while(ptr != NULL){
        count++;
        printf("%d ", ptr-> data);
        ptr = ptr->link;
    }
    printf("\nNumber of nodes: %d", count);
}


int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current-> data = 2;
    current->link = NULL;
    head-> link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 3;
    current-> link = NULL;
    head ->link->link = current;

    Count_and_print_LL(head);
    return 0;
}