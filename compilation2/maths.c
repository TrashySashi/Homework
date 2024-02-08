#include <stdio.h>
#include "maths.h"

int factoriel(int number)
{
    int n = number, fact = 1;

    for(int i = 0; i < n; i++){
        fact *= number;
        number -= 1;
    }

    return fact;
}