#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of integers/blocks: ");
    scanf("%d", &n);
     
    int *mptr = (int*)malloc(n * sizeof(int));
   
    int *cptr = (int*)calloc(n, sizeof(int));

    if(mptr == NULL || cptr == NULL ){
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

    printf("\nusing calloc: ");
    for(int i = 0 ; i < n ; i++){
        cptr[i]= i+2;
        printf("%d ", *(cptr +i));
        
    }
    printf("\n");

    int newsize = n+3; 
    int *rptr = (int*)realloc(mptr, newsize * sizeof(int));

    if(rptr == NULL){
        printf("reallocation failed\n");
        return 1;
    }
    else 
        printf("allocation successful\n");

    printf("using realloc: ");
    for(int i = n ; i < newsize ; i++)
        rptr[i]= i+100;

    for(int i = 0 ; i < newsize ; i++)
        printf("%d ", *(rptr +i));
        
     printf("\n");

    free(rptr);
    rptr = NULL;
    free(cptr);
    cptr = NULL;
    // we should not free mptr again because realloc took it's place in the memory.    

    return 0;
}