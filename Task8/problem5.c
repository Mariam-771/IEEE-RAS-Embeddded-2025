#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum=0, n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory isn't available.\n");
        return 1;
    }

    for(int i = 0 ; i < n ; i++){
        printf("Enter integer %d: ", i + 1);
        scanf("%d", arr + i);
    }
   
    for(int i = 0 ; i < n ; i++){
       
        sum += *(arr + i);
    }
    printf("sum : %d\n", sum);
    
    free(arr);
    arr = NULL;
    return 0;
}