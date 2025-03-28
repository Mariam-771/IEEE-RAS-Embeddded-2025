#include <stdio.h>
#include <math.h>

void Armstrong(int lowerLimit, int upperLimit){
    if (lowerLimit > upperLimit) return; 

    int sum=0,temp=lowerLimit, digits=0;

    while(temp > 0){
        temp /=10;
        digits++;
    }

    temp=lowerLimit;

   while(temp > 0){
    sum += pow((temp%10), digits);
    temp /= 10;
   }

   if(sum == lowerLimit && (lowerLimit == 1 || lowerLimit >= 10)){
    printf("%d ", lowerLimit);
}
Armstrong(lowerLimit + 1, upperLimit);
}
int main()
{
   int  lowerLimit, upperLimit;
   scanf("%d %d", &lowerLimit, &upperLimit);
   printf("Armstrong numbers between %d and %d are: ",lowerLimit, upperLimit);
   Armstrong(lowerLimit, upperLimit);
    return 0;
}

