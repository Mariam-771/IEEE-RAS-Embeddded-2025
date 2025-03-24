#include <stdio.h>
#include <stdlib.h>
//https://codeforces.com/submissions/anonymous78#

int main()
{
  int totalDays=0, yearCount=0, monthsCount=0;
  scanf("%d", &totalDays);

  while(totalDays >=365){
    totalDays -= 365;
    yearCount++;
  }
  while(totalDays >= 30){
   totalDays -= 30;
   monthsCount++;
  }

  printf("%d years\n%d months\n%d days", yearCount, monthsCount, totalDays);

    return 0;
}
