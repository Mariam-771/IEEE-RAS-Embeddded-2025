#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/my#
void digits(int n);

int main(){
    int testCases, n;
    scanf("%d", &testCases);
    for(int i = 0 ; i < testCases ; i++){
        scanf("%d", &n);
        digits(n);
        printf("\n");
    }

    return 0;
}

void digits(int n){
    if (n < 10){
    printf("%d ", n); 
    return;
}
    digits(n/10);
    printf("%d ", (n%10));
    
}