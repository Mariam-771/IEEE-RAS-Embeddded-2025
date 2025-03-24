#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int num, sum=0, i=1;
  printf("Enter a postive number\n");
   scanf("%d", &num);

   while ( i < num){
   if ( num % i == 0){
    sum += i;
     }
     i++;
   }
       if(num == sum)
    printf("%d is a perfect number", num);
      else
    printf("%d is not a perfect number", num);

    return 0;
}