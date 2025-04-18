#include <stdio.h>

int main(){
    int matrix1[3][3], matrix2[3][3]; 
    printf("matrix1:");
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
          scanf("%d", &matrix1[i][j]);
        } 
    }
    printf("matrix2:");
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
          scanf("%d", &matrix2[i][j]);
        } 
    }
    
  printf("Sum of both matrices = ");
  printf("\n"); 

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("%d ", (matrix1[i][j]+matrix2[i][j]));
    }
    printf("\n");  
}
return 0;
}
