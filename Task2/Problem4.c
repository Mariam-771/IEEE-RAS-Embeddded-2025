#include <stdio.h>
//https://codeforces.com/group/MWSDmqGsZm/contest/223339/my#
void printNum(int n);

int main()
{
    /* code */
 int n;
 scanf("%d", &n);
 printNum(n);
    return 0;
}
void printNum(int n){
    if(n==0)
    return;
    printNum(n-1);
    printf("%d\n", n);   
}
