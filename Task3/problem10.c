#include <stdio.h>

int main() {
   int n;
   printf("Enter the size of the square: ");

   scanf("%d", &n);
   int a[n][n];

   printf("Enter the elements of the square:\n");
   for (int i = 0; i < n; i++)
   {
     for (int j = 0; j < n; j++)
        {
         scanf("%d", &a[i][j]);
        }    
   }
   
   //refrence
   int sum = 0;
   for (int i = 0; i < n; i++) {
       sum += a[0][i];
   }
  
int diasum1=0,  diasum2=0;

   for (int i = 0; i < n; i++){

    int rowsum=0, colsum=0;

    for (int j = 0; j < n; j++){
       rowsum += a[i][j];
       colsum += a[j][i];  
  }

  if(rowsum != sum || colsum != sum ){
    printf("The square is not a magic square.");
    return 0;
}
    diasum1 += a[i][i];
    diasum2 += a[i][n-i-1]; 

} 
 
if (diasum1 != sum || diasum2 != sum) {
    printf("The square is not a magic square.");
} else {
    printf("The square is a magic square.");
} 

    return 0;
}

