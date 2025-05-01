#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date1, date2;

    printf("Enter first date: ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date: ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
   
    struct Date *p = &date1;
    struct Date *q = &date2;
    
   
    if(p->year == q->year 
       && p->month == q->month
        && p->day == q->day)

        printf("Dates are equal\n");

        else 
        printf("Dates are not equal\n");
    
    return 0;
}