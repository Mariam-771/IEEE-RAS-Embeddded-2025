#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/my#
void nextNum(int n, int count){

    if (n == 1) {
        printf("%d\n", count);
        return;
    }
    
     if(n%2 == 0)
     nextNum(n/2, count+1);
     else
     nextNum((3*n +1),count+1); 
}

int main(){
int n ;
scanf("%d", &n);
nextNum(n, 1);

return 0;
}