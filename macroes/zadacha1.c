#include <stdio.h>
#define ARR_N 5


int main()
{
    int arr[ARR_N] = {1, 2, 3, 4, 5};
    for(int i = 0; i < ARR_N; i++){\
        printf("%d ", arr[i]);
    }

    return 0;
}