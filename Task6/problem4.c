#include <stdio.h>
    // a 32- bit processor reads 4 bytes at a time 
struct Dog{
    char name; // 1 byte
    int age; // 4 bytes
    char kind;  // 1 byte
    //compiler adds 3 bytes of padding (empty space) after name and kind
    // Total: 1 + 3 (padding) + 4 + 1 + 3 (padding)  = 12 bytes  
};

struct cat{
    int age; 
    char name;
    char kind;  
    // Total: 4 + 1 + 1 + 2 = 8 bytes 
    // 4 bytes + 1 byte + 1 byte + 2 bytes (padding) = 8 bytes
};


int main() {
    printf("%d\n", sizeof(struct Dog)); 
    printf("%d", sizeof(struct cat));
  
    return 0;
}