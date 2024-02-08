#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a, double b, double c)
{
    struct QuadraticRootsResult roots;
    double d = 0;
    d = (b * b) - (4 * a * c);

    if (d < 0)
    {
        roots.norealroots = 1;
    }
    else if (d == 0)
    {
        roots.norealroots = 0;
        roots.x1 = -b / (2 * a);
    }
    else if (d > 0)
    {
        roots.norealroots = 0;
        roots.x1 = (-b + sqrt(d)) / (2 * a);
        roots.x2 = (-b - sqrt(d)) / (2 * a);
    }

    return roots;
}
