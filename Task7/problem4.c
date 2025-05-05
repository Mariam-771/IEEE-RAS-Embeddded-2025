#include <stdio.h>
enum Days {Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday};

void Days(enum Days day) {
    if ( day == Friday || day == Saturday) {
        printf("It's the weekend!\n");
    } else {
        printf("It's a weekday.\n");
    }
}

int main() {
    enum Days day = Friday;
    Days(day);
    return 0; 
}