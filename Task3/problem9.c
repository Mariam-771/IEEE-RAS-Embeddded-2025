#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/my#
int main()
{
    int n, count=0;
    scanf("%d", &n);
    int a[n];

    scanf("%d", &a[0]);
    int min = a[0];

    for (int i = 1; i < n; i++)
    {
     scanf("%d", &a[i]);
     if(a[i] < min)
        min = a[i];
    }

    for (int i = 0; i < n; i++)
    {
       if(a[i] == min)
       count++;
    }

    printf(count % 2 == 0 ? "Unlucky" : "Lucky");

    return 0;
}
