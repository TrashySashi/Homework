#include <stdio.h>
#define COMPARE(A, B) ((A) > (B)) ? A: B


int main()
{
    int a = 8, b = 3;
    int c = COMPARE(a, b);
    printf("%d", c);

    return 0;
}