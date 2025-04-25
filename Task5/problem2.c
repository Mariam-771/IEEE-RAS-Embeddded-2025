#include <stdio.h>
void copyString(char *str, char *copy){
    while(*str != '\0'){
     *copy = *str;
     str++;
     copy++;
    }
    *copy = '\0';
}

int main() {
    char str[] = "Embedded systems";
    char copy[sizeof(str)/sizeof(str[0])];
    
    copyString(str, copy);
    printf("Original String: %s\n", str);
    printf("Copied String: %s\n", copy);

    return 0;
}