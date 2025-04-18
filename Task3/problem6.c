#include <stdio.h>
#include <math.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my# 
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    } 
    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < m/2 ; j++)
        {
         int temp = a[i][j];
         a[i][j] =  a[i][m-1-j];
         a[i][m-1-j] = temp;
        }
    }  
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    } 

return 0;
}
