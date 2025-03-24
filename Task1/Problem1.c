#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int n, Max=0, Min=1e9;
 // extreme values for both min and max
 while (1){

    scanf("%d", &n);
    if(n == -1) break;

    if ( n > Max) Max = n;
    if (n < Min && n != -1) Min = n;
 }
printf("%d %d", Max, Min);
    return 0;
}

