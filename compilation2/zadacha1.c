#include <stdio.h>

#define RESULT(A, B) ((A) + (B)) * ((A) + (B))

int main()
{
    int result = RESULT(4,3);
    printf("%d", result);

    return 0;
}