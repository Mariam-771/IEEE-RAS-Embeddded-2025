#include <stdio.h>
#include <math.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/223205/my#

int binaryIsPalindrom(int n);
void wonderfulNum(int n);

int main()
{
    int n;
    scanf("%d", &n);
    wonderfulNum(n);

    return 0;
}

int binaryIsPalindrom(int n){
  int size =0;
  int binaryNum[32];  //for 32 bits
 
  while (n != 0){
      binaryNum[size]=n%2;
      n /= 2; 
      size++;
  }

for (int i = 0, j=size-1; i < j; i++, j--)
{
  if (binaryNum[i] != binaryNum[j]){
return 0;
  }
 
}
return 1;  
}

void wonderfulNum(int n){
  if(n%2 != 0 && binaryIsPalindrom(n)==1)
printf("YES");
  else 
printf("NO");
}
