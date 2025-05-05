#include <stdio.h>
union data {
    int a;
    float b;
    char c;
}d;
int main() {
    d.a = 65;
    printf("%d %f %c\n", d.a, d.b, d.c);
    d.b = 3.14; ;
    printf("%d %f %c\n", d.a, d.b, d.c);
    d.c = 'A';
    printf("%d %f %c\n", d.a, d.b, d.c);

    return 0;
}