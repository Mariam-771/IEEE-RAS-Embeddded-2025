#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my# 
void sorting(int a[], int n);

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    sorting(a, n);
    for (int i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
    }
return 0;
}

//selection sort

void sorting(int a[], int n){
int min;
    for (int i = 0 ; i < n-1 ; i++){
     min = i;
     for (int j = i+1; j < n; j++)
     {
      if ( a[j] < a[min])
      min = j;
     }
     //swap 
    int temp = a[i] ;
    a[i] = a[min];
    a[min] = temp;
    }   
}