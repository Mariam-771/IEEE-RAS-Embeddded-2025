#include <stdio.h>
#include <stdlib.h>

int main() {
    char word[100], temp [100];
    scanf("%s", word);

    int length = 0, isPalindrome = 1;

     //to find the length of the current word
    while (word[length] != '\0') {
        length++;
    }
  
    for(int i = 0, j = length - 1; i < length; i++, j--){
            temp[i] = word[j];
            
         if (word[i] != temp[i]) {
            isPalindrome = 0; 
         break;
        }
    }

    if(isPalindrome) printf("The word '%s' is a palindrome", word);
    else printf("The word '%s' is not a palindrome", word);

    return 0;
}