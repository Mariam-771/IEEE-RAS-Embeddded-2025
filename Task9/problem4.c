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

void print_list(struct node *head){
    
    if(head == NULL)
        printf("\nLinked List is Empty\n");
 
    struct node *ptr = head;
    while ( ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> link;
    }

}

struct node* delete_list (struct node *head){

struct node *temp = head;
while (temp != NULL) {
    temp = temp-> link;
    free(head);
    head = temp;
}
return head;
}

int main() {

    struct node *head = (struct node*) malloc (sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    insert_end(head, 55);
    insert_end(head, 66);
    insert_end(head, 77);

    print_list(head);  

    head = delete_list(head);
    
    print_list(head);
    return 0;
}