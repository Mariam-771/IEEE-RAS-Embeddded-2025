#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/my#
int main()
{
    int n,count=1;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);

for (int i = 1 ; i < n; i++)
{
  if(s[i] != s[i-1])
  count++;
}

printf("%d", count);   

return 0;
}
