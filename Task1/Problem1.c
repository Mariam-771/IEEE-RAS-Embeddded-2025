#include <stdio.h>
#include <math.h>

void isArmstrong(int lowerLimit, int upperLimit){
    if (lowerLimit > upperLimit)
        return;

    int sum=0,temp=lowerLimit, digits=0;

    int num = temp;
    while(num>0){
        num /=10;
        digits++;
    }

   while(temp !=0){
    sum += pow(temp%10, digits);
    temp /= 10;
   }

   if(sum == lowerLimit){
    printf("%d, ", lowerLimit);
}
   isArmstrong(lowerLimit+1,  upperLimit);
}
int main()
{
   int  lowerLimit, upperLimit;
   scanf("%d %d", &lowerLimit, &upperLimit);
   printf("Armstrong numbers between %d and %d are: ",lowerLimit, upperLimit);
   isArmstrong(lowerLimit, upperLimit);
    return 0;
}

