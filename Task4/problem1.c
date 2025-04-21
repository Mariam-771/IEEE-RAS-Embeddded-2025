#include <stdio.h>

int main() {
   int a = 5, *ptr1 = &a;
   char b = 'A', *ptr2 = &b;
   float c = 3.14, *ptr3 = &c;
   long d = 123456789, *ptr4 = &d;

   printf("%d\n", *ptr1); // output = 5
   printf("%c\n", *ptr2); // output = A
   printf("%f\n", *ptr3); // output = 3.14
   printf("%ld\n\n", *ptr4); // output = 123456789

   printf("changing those values\n\n"); 
   *ptr1 = 10;
   *ptr2 = 'M';
   *ptr3 = 2.718;
   *ptr4 = 987654321;

   printf("%d\n", *ptr1); // output = 10
   printf("%c\n", *ptr2); // output = M
   printf("%f\n", *ptr3); // output = 2.718
   printf("%ld\n\n", *ptr4); // output = 987654321


   printf("printing address\n\n"); 
   printf("%p\n", ptr1); //prints the adress of a
   printf("%p\n", ptr2); // prints the address of b
   printf("%p\n", ptr3); // prints the address of c
   printf("%p\n", ptr4); // prints the address of d

    return 0;
}