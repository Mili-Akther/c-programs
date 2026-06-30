#include <stdio.h>

void main() {
    long int ARR[10];
    int i, j = 0, k = 0, size,temp;
    printf("Enter the size of array AR \n");
    scanf("%d", &size);
    printf("Enter the elements of the unsorted array \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &ARR[i]);
    }

    for(i=0; i<size-1; i++) {
        for(j=i+1; j<size; j++) {

            if(ARR[i]>ARR[j]) {
                temp = ARR[i];
                ARR[i]=ARR[j];
                ARR[j]=temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0; i<size; i++) {
        printf("%d\n", ARR[i]);
    }

}
