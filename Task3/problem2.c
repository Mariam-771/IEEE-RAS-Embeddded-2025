#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my#
void LowestNumber(int a[], int n);
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    LowestNumber(a, n);
return 0;
}

void LowestNumber(int a[], int n){
    int min = a[0], position=0;

    for (int i = 1 ; i < n ; i++){
        if(a[i] < min){
        min = a[i];
        position=i;
    }
    }
   printf("%d %d", min, 1+position);
}