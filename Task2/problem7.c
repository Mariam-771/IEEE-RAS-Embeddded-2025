#include <stdio.h>

int gcd(int a, int b, int div){

    if(a%div == 0 && b%div == 0 ){
    return div;
}
    return gcd(a, b, div-1);
 
}
int main(){
    int a,b,div;
    scanf("%d %d", &a, &b);
    div= (a>b) ? b : a;
    printf("GCD of %d and %d = %d",a, b, gcd(a, b, div));
   
   return 0;
}