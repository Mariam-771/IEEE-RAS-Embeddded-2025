#include <stdio.h>
#include <stdlib.h>

//https://codeforces.com/submissions/anonymous78#

int main()
{
  int size = 4, numbers[size];
  long long multiplication = 1;
  for (int i = 0 ; i < size ; i++){
    scanf("%d",&numbers[i]);
    multiplication =(multiplication * numbers[i]) % 100;
  }
  printf("%02lld", multiplication);
    return 0;
}
