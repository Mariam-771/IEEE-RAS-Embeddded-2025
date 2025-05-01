#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    char kind[20];
    char food[20];
    char owner[20];   
}animal;

int main() {
    animal dog = {"joey", 5, "German Shepherd", "meat", "Reem"};
    printf("Name: %s\n", dog.name);
    printf("Age: %d\n", dog.age);   
    printf("Kind: %s\n", dog.kind);
    printf("Food: %s\n", dog.food);
    printf("Owner: %s\n", dog.owner);

    return 0;
}