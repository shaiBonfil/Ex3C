#include <stdio.h>
#include "isort.h"

#define LENGTH 50

int main(){
    int arr [LENGTH] = {0};
    int i, j;
    for(i = 0; i < LENGTH; i++){
        scanf(" %d", (arr+i));
    }

    //Print the sorted array.
    insertion_sort(arr, LENGTH);
    for(j = 0; j < LENGTH-1; j++){
        printf(" %d,", *(arr+j));
    }
    printf(" %d", *(arr+LENGTH-1));
    printf("\n");
    
    return 0;
}