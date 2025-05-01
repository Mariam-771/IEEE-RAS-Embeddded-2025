#include <stdio.h>
struct car {
    int speed;
    int fuel;
};
int main() {
    struct car c[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter speed of car %d: ", i + 1);
        scanf("%d", &c[i].speed);
        printf("Enter fuel of car %d: ", i + 1);
        scanf("%d", &c[i].fuel);
    }
    for (int i = 0; i < 2; i++) {
        printf("Car %d\n - Speed: %d, Fuel: %d\n", i+1, c[i].speed, c[i].fuel);
    }  
    return 0;
}