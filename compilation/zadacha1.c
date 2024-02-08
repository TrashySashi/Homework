#include <stdio.h>
#define DEBUG

int sorting(int arr[], int arrlen) {
    for (int i = 0; i < arrlen; i++) {
        for (int j = 0; j < arrlen - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 1; i < arrlen; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
        }
    }

    printf("sum = %d\n", sum); 
}

int main() {
    int arr[] = {4, 6, 2, 5, 1, 3, 7};
    int arrlen = 7;

    sorting(arr, arrlen);

#ifdef DEBUG
    for (int i = 0; i < arrlen; i++) {
        printf("%d ", arr[i]);
    }

    printf("sum = ");
    for (int i = 1; i < arrlen; i++) {
        if (i % 3 == 0) {
            printf("%d", arr[i]);

            if(arrlen < 7) continue;
            if (i < arrlen - 1) {
                printf(" + ");
            }
        }
    }
    printf("\n"); 
#endif
}
