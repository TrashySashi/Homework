#include <stdio.h>
#include "quadraticroots.h"

int main()
{
    struct QuadraticRootsResult results = findroots(1, 2, -3);
    printf("%d, x1 = %lf, x2 = %lf", results.norealroots, results.x1, results.x2);

    return 0;
}