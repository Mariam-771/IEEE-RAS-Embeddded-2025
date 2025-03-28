#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/my#
int Fibonacci(int n){

    if(n <= 1)
    return n; 
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d ", Fibonacci(n-1));
    
    return 0;
}