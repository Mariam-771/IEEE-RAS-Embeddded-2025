#include <stdio.h>
#include <string.h>

struct Dog{
    char name[20];
    int age;
    char kind[20];   
};

struct Dog createStruct(char *name, int age, char *kind) {
    struct Dog dog1;
    dog1.age = age;   
    strcpy(dog1.kind, kind); 
    strcpy(dog1.name, name);  
    return dog1;
}

int main() {
   
    return 0;
}
