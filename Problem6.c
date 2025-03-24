#include <stdio.h>
#include <stdlib.h>

//https://codeforces.com/submissions/anonymous78#

int main()
{
 int n;
  scanf("%d", &n);
  for(int i = 1 ; i <= n ; i++){
    if(n%i == 0)
        printf("%d\n", i);
  }
    return 0;
}
