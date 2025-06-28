#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void return_node (struct node *head, int position){
if (head == NULL)
printf("linked list is empty");

struct node *ptr = head;

while (ptr != NULL && position != 1){
    ptr = ptr -> link;
    position--; 
}

if (ptr == NULL) {
    printf("Position out of bounds\n");
} else {
    printf("%d\n", ptr->data);

}
}

void insert_node(struct node *head, int position, int data){

struct node *NewNode = (struct node*) malloc (sizeof(struct node));
NewNode -> data = data;
NewNode -> link = NULL;

struct node *ptr = head;

position--; 
while (ptr != NULL && position != 1){
    ptr = ptr -> link;
    position--; 
}

NewNode -> link = ptr -> link;
ptr -> link = NewNode;
 
}

void printList(struct node *head){
struct node *ptr = NULL;
if (head == NULL)
printf("linked list ois empty");
ptr = head;

while (ptr != NULL){
    printf("%d ", ptr-> data);
    ptr = ptr -> link;
}
}

int main() {

    struct node *head = (struct node*) malloc (sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = (struct node*) malloc (sizeof(struct node));
    current -> data = 66;
    current -> link = NULL;
    head    -> link = current;

    current = (struct node*) malloc (sizeof(struct node));
    current -> data = 77;
    current -> link = NULL;
    head -> link -> link = current;

    printf("list: ");
    printList(head);

    int position;
    printf("\nEnter the position of the node to return: ");
    scanf("%d", &position);
    return_node(head, position);

    insert_node(head, 3, 99);
    printf("List after inserting 99 at position 2: ");
    printList(head);

    return 0;
}