#include <stdio.h>
typedef struct{
    float real;
    float imag;
}nums;

nums add(nums a, nums b) {
   nums sum;
   sum.real = a.real + b.real;
   sum.imag = a.imag + b.imag;
   return sum;
}


int main() {
    nums c1 = {1, 0.5};
    nums c2 = {2, 3.5};
    nums sum = add(c1, c2); 
     
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
  
    return 0;
}