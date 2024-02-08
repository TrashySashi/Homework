#include <stdio.h>
#define SWAP(A, B, TYPE) TYPE c = A;\
                         A = B;\
                         B = c;



int main()
{
    int a = 5;
    int b = 7;

    SWAP(a, b, int);

    printf("a = %d, b= %d", a, b);
    
    return 0;
}
