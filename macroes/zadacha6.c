#include <stdio.h>
#define SWAP(A, B, TYPE) TYPE c = A;\
                         A = B;\
                         B = c;
#define SORT(ARRAY, SIZE, TYPE, COMPARE) for (int i = 0; i < SIZE; i++) { \
                                            for (int j = 0; j < SIZE - i - 1; j++) { \
                                                if (ARRAY[j] COMPARE ARRAY[j + 1]) { \
                                                    SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
                                                } \
                                            } \
                                         } \



int main()
{
    int arr[] = {1, 7, 4, 8, 3, 9};
    int arrlen = 6;

    SORT(arr, arrlen, int, >);
    printf("The sorted array: ");

    for (int i = 0; i < arrlen; i++){
        printf("%d, ", arr[i]);
    }
    
    return 0;
}