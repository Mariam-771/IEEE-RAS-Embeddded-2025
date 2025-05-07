#include <stdio.h>
//#define AscendingSort
#define DescendingSort

void sortAscending(int arr[], int size) {
    printf("\nEnter the elements: ");
    for (int i = 0; i < size ; i++) {
       scanf("%d", &arr[i]);
    }
    //bubble sort
   for(int i = 0; i < size - 1; i++) {
       for(int j = 0; j < size - i - 1; j++) {
           if(arr[j] > arr[j + 1]) {
               int temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
       }
   }
   
}

void sortDescending(int arr[], int size) {
    printf("\nEnter the elements: ");
    for (int i = 0; i < size ; i++) {
       scanf("%d", &arr[i]);
    }
    //bubble sort
   for(int i = 0; i < size - 1 ; i++) {
       for(int j = 0; j < size - i - 1; j++) {
           if(arr[j] < arr[j + 1]) {
               int temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
       }
   }
   
}



int main() {
    
    int n; 
    printf("Enter the number elements: ", n);
    scanf("%d", &n);

    int arr[n];

    #ifdef AscendingSort
    sortAscending(arr, n);
    printf("\nAscending order");
    #endif

    #ifdef DescendingSort
    sortDescending(arr, n);
    printf("\nDescending order ");
    #endif
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}