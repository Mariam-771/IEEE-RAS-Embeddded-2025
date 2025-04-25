#include <stdio.h>
#define N 3 

void multiplyMatrices(int *m1, int *m2, int *multi, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(multi + i * n + j) = 0; 
            for (int k = 0; k < n; k++) {
                *(multi + i * n + j) +=   (*(m1 + i * n + k)) * (*(m2 + k * n + j));
            } 
        }
    }    
}

int main() {
    
    int m1[][N] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int m2[][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int multi[N][N];
  
    multiplyMatrices(&m1[0][0], &m2[0][0], &multi[0][0], N);
    printf("Product of matrices is:\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}