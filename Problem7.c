#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num){
    if(num == 2){
        return 1;
    }
    if(num % 2 == 0 || num < 2 ){
            return 0;
    }

    for(int i = 3 ; i <= sqrt(num) ; i+=2){
       if(num % i == 0) return 0;
    }

    return 1;
}

int main()
{
 int num, sum=0;
 printf("Enter a postive integer\n");
 scanf("%d", &num);

 while(num > 0){
 sum += num % 10;
 num /= 10;
 }

 if(isPrime(sum)){
printf("The sum of digits (%d) is a prime number.", sum);
    }
else{
printf("The sum of digits (%d) is not a prime number.", sum);
}

    return 0;
}
