#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of integers/ ");
    scanf("%d", &n);
     
    int *mptr = (int*)malloc(n * sizeof(int));


    if(mptr == NULL ){
        printf("allocation failed\n");
        return 1;
    }
    else 
        printf("allocation successful\n");


    printf("using malloc: ");
    for(int i = 0 ; i < n ; i++){
       mptr[i]= i;
       printf("%d ", *(mptr +i));
       
    }
    printf("\n");

    free(mptr);
    mptr = NULL;

    int *NEW_mptr = (int*)malloc((n*10) * sizeof(int));

    
    if(NEW_mptr == NULL ){
        printf("allocation failed\n");
        return 1;
    }
    else 
        printf("allocation successful\n");
    
        
    printf("new Large space: ");
    for(int i = 0 ; i < (n*10) ; i++){
        NEW_mptr[i]= i *10;
       printf("%d ", *(NEW_mptr +i));
    }

    free(NEW_mptr);
    NEW_mptr = NULL;
 //we attembted to release memory before needing more
 // if the systenm has limited available memory allocation may faill
 
 //realloc expands the current block in-place if possible
 return 0;
}