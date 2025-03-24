#include <stdio.h>
#include <stdlib.h>

//https://codeforces.com/submissions/anonymous78#

int main()
{
 int n, m;
  while(1){
 int min, max, sum=0;

  scanf("%d %d", &n, &m);

  if(m<=0 || n<=0)
    break;

  if(m>n){min=n; max=m;}
  else{min=m; max=n;}

  for(int i=min ; i<=max ; i++){
  printf("%d ", i);
  sum += i;
  }
  printf("sum =%d\n", sum);
  }
    return 0;
}