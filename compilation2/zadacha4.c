#include <stdio.h>


int main()
{
    long array[100];
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter a number: ");
        scanf("%ld", &array[i]);
    }

    for(int i = 0; i < n; i++){
        array[i] = pow(array[i], 4);
    }

    for(int i = 0; i < n; i++){
        printf("%ld ", array[i]);
    }

    return 0;
}