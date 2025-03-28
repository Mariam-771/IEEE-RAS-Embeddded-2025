#include <stdio.h>

void isDivisible (int n, int div){
    if (div == 0) {
        printf("Division by zero isn't allowed\n");
        return;
    }
    if (n % div == 0)  
     printf("%d is divisible by %d\nresult = %d\n", n, div, (n /div)) ;
    else  
        printf("%d is not divisible by %d\n", n, div);
    
  
}
 
int main()
{
    int n, div;
   scanf("%d %d", &n, &div);
   isDivisible(n, div);
    return 0;
}
