#include <stdio.h>
#include <math.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my#
int main()
{
    int n, absDiffrence=0, sum1=0, sum2=0;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }  

    for (int i = 0; i < n; i++)
    { 
         sum1 += a[i][i];
         int j = (n-1)-i;
         sum2 += a[i][j]; 
    }
    
    absDiffrence = abs(sum1-sum2);

    printf("%d", absDiffrence);
    return 0;
}
