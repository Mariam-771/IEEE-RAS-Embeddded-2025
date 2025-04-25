#include <stdio.h>
int compareStrings(char *p1, char *p2){

    while( *p1 != '\0' || *p2 != '\0'){ 
        if(*p1 != *p2)
        return 0;
            p1++;
            p2++;   
    }
    return 1;
}

int main() {
    char str1[] = "RAS Chapter";
    char str2[] = "RAS Chapter";
    char *p1 = &str1[0], *p2 = str2;
    compareStrings(str1, str2) ? printf("Both strings are Identical"):printf("Strings are Different");
    return 0;
}