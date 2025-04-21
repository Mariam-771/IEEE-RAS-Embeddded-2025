#include <stdio.h>

int main() {
    int a = 7;
    int *aptr = &a;
    //& is the address operator, * is the value operator
    printf("Address of a is %p\nAddress pf aPtr is %p\n\n", &a, aptr);
    printf("Value of a is %d\nValue of *aPtr is %d\n\n", a, *aptr);

    printf("Showing that * and & are complements of each other\n");

    // &*aPtr address of the value pointed at by aptr (address of a)
    //*&aPtr value value of the aptr that points to a (address of a)

    printf("&*aPtr = %p\n*&aPtr = %p\n", &*aptr, *&aptr);

    return 0;
}