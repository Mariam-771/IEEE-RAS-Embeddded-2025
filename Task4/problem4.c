#include <stdio.h> 

void PrintEvenNumbers(char *str) {
  while (*str != '\0'){
    // 0 in ascii is 48, 1 is 49, ...,9 is 57
    if((*str - '0') %2 == 0){
    printf("%c", *str);
  }
    str++;
  }
  printf("\n");
}

int main() {
    char str[] = "012345678";
    
    PrintEvenNumbers(str);
    return 0;
}