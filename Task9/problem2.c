#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
    };

void insert_end(struct node *head, int data){
    if(head == NULL){
        printf("Linked List is Empty\n");
        return;
    }

    struct node *ptr;
    ptr = head;
    
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    while(ptr-> link != NULL){
        ptr = ptr -> link;
    }
    ptr-> link = temp;
}

void insert_begin(struct node **head,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = *head;
    *head = ptr; 
}

void delete_node(struct node **head, int pos){
 struct node * current = *head;
 struct node * prev = *head;
 if(head == NULL){
     printf("Linked List is Empty\n");
 }
 else if(pos == 1){
     *head = current -> link;
     free(current);
     current = NULL;
 }
 else{
     while (pos != 1){
        prev = current;
        current = current -> link;
        pos--;
     }
     prev -> link = current -> link;
     free(current);
     current = NULL;
 }  
 
}
void print_list(struct node *head){
    struct node *ptr = head;
    if(head == NULL)
        printf("Linked List is Empty\n");
    
    while ( ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }

}

int main() {
    // Create a linked list with two nodes
    struct node *head = (struct node*) malloc(sizeof(struct node));
    head -> data = 1;
    head -> link = NULL;

    struct node *current = (struct node*) malloc(sizeof(struct node));
    current -> data = 2;
    current -> link = NULL;
    head -> link = current;

    printf("Linked List: ");
    print_list(head);
    printf("\n");

    int d1 = 0, d2 = 3;

    // Insert a node at the beginning
    insert_begin(&head,d1);
    printf("inserting a node ar the beginning: ");
    print_list(head);
    printf("\n");
 
    // Insert a node at the end
    insert_end(head, d2);
    printf("inserting a node at the end: ");
    print_list(head);
    printf("\n");
    
    int position;
    printf("Enter the position of the node to delete: ");
    scanf("%d", &position);
    // Delete the last node
    delete_node(&head, position);
    printf("Deleting the last node: ");
    print_list(head);
    printf("\n");
    return 0;
}