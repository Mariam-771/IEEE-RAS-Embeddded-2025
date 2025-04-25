#include <stdio.h>
void oddNums(int *a, int len, int *oddcount, int *odds) {
    *oddcount = 0; 
    int *end = a + len;

    while (a < end){
        if(*a %2 != 0){
           odds[*oddcount]=*a;
            (*oddcount)++;
        }
        a++;      
    } 
}

int main() {
   int a []= {1, 2, 3, 4, 5, 6, 7};
   int len = sizeof(a)/sizeof(a[0]);
   int count = 0;
   int odds[len]; 
  
   oddNums(a, len, &count, odds);
    
   printf("Odd numbers: ");
   for (int i = 0; i < count; i++) {
    printf("%d ", odds[i]);
}

   printf("\nTotal odd numbers: %d", count);
    return 0;
}