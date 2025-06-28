#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node * insert_at_beginning (struct node *head, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;

    temp -> next = head;
    head -> prev = temp;
    head = temp;
    return head;

}


int main (){
    struct node *head = malloc (sizeof(struct node));
    head -> prev = NULL;
    head -> data = 45;
    head -> next = NULL;


    head = insert_at_beginning(head, 77);

    head = insert_at_beginning(head, 66);
    
    struct node *ptr = head;
    while (ptr != NULL){
    printf("%d ", ptr-> data);
    ptr = ptr -> next;
    }
   
    return 0;

}