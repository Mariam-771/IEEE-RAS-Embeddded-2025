#include <stdio.h>
int lengthOfString(char *str){
    int count;
    while (*str != '\0'){
        count++;
        str++;
    }
    return count;
}

int main() {
   char str[] = "Embedded Systems";
    int length = lengthOfString(str);
    printf("Length = %d", length);
    return 0;
}