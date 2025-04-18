#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my#
int searching(int a[], int n, int x);

int main()
{
  int n,x;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
  {
   scanf("%d", &a[i]);
  }

  scanf("%d", &x);

  printf("%d",searching(a, n, x));
    return 0;
}

int searching(int a[], int n, int x){
    for (int i = 0; i < n; i++)
    {
     if(x == a[i]) return i;
    } 
    return -1;  
}