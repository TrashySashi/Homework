#include <stdio.h>
#include "maths.h"

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int result = factoriel(n);
    printf("%d! = %d", n, result);

    return 0;
}