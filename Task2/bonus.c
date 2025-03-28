#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/my#

 int reachvalue(long long n, long long current){
    if(current == n) return 1;
    
    if(current > n)  return 0;
        
    return reachvalue(n,  current*10) ||   reachvalue(n,  current*20); 
}
int main()
{
    int testCases;
    scanf("%d", &testCases);
    while (testCases--)
    {
        long long n;
       scanf("%lld", &n);
       if(reachvalue( n, 1))
        printf("YES\n");  
       else
       printf("NO\n");
    } 
    return 0;
}
