#include <stdio.h>
void sort (int *a, int n){
    int min = 0, temp;
    for(int i = 0 ; i < n-1 ; i++){
        min = i;
        for ( int j = i + 1 ; j < n ; j++){
            if (*(a+j)<*(a+i))
                min = j;
            }
     temp = *(a+i);
    *(a+i) = *(a+min);
    *(a+min) = temp;           
        }
    }  

int main() {
    int a[]= {10, -1, 0, 4, 2, 100, 15, 20, 24, -5};
    int len = sizeof(a)/sizeof(a[0]);
    int *ptr=a;
    sort(a,len);
    printf("Array in ascending order: ");
    for (int i = 0; i < len; i++){
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    printf("Array in descending order: ");
    for (int i = len-1 ; i >= 0; i--){
        printf("%d ", *(ptr+i));
    }
    return 0;
}