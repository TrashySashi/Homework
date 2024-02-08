#include <stdio.h>
#include <math.h>
#define ARRAY_SIZE 5

int main() {
    #ifndef ARRAY_SIZE
    printf("razmera ne se poddurja");
    #elif ARRAY_SIZE > 10 || ARRAY_SIZE < 1
    printf("razmera ne se poddurja");
    #else
    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = pow(2, i);
    }
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d\n", arr[i]);
    }
    #endif
}
