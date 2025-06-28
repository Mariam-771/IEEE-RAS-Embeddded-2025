#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node *circularLL(int data){
    struct node *temp = malloc (sizeof(struct node));
    temp -> data = 45;
    temp -> link = temp;
    return temp; 
}

struct node *insert_end(struct node *tail, int data){
    struct node *newNode = malloc (sizeof(struct node));
   newNode -> data = data;

    if (tail == NULL) {
     
        newNode->link = newNode; 
         tail = newNode;
         return tail; 
    }

   newNode -> link = tail -> link;
    tail -> link = newNode;
    tail = newNode;
    return tail;   
}

void printList(struct node *tail) {
    if (tail == NULL) 
        printf("List is empty\n");

    // start from the first node   
    struct node *ptr = tail->link; 
   
   do {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    } while (ptr != tail->link);
   
}

struct node* add_at_pos(struct node *tail, int data, int pos){
   struct node *newNode = malloc (sizeof(struct node));
   newNode -> data = data;
   newNode -> link = NULL;
   
   struct node *ptr = tail->link;
   pos--;
   while (pos > 1) {
    ptr = ptr->link;
    pos --;
   } 

   newNode->link = ptr->link;
   ptr->link = newNode;

//handle add at the end 
   if(newNode == tail){
    tail = tail-> link;
   }
return tail;

}
int main (){

   struct node *tail = circularLL(45);
   tail = insert_end(tail, 55);
   tail = insert_end(tail, 66);
   tail = insert_end(tail, 77);

   printList(tail);
   printf("\n");
   tail = add_at_pos(tail, 99, 3);
   printList(tail);

   return 0;
  
}