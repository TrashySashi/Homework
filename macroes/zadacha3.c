#include <stdio.h>
#define DEBUG(X) printf(#X " = %d\nFILE: %s\nLINE: %d\n", X, __FILE__, __LINE__) 

int main()
{
    int n = 5;
    DEBUG(n);

    return 0;
}