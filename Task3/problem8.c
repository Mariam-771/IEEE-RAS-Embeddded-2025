#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/my#
int isLetter(char c){
    return (c >= 'A' && c <= 'Z' || c >= 'a' && c<='z');
}

int main()
{
   int count = 0, size =1000000;
   char s[size]; 
   fgets(s, size, stdin);
 
   if (isLetter(s[0])) {
    count++;
}

   for (int i = 1 ; s[i] != '\0' ; i++ ){
    //start of a new word
    if ( isLetter(s[i]) && !isLetter(s[i - 1])) 
    count++;
   }

  printf("%d", count);
    return 0;
}
