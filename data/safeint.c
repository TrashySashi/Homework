#include <stdio.h>
#include "safeint.h"
#include <limits.h>

struct SafeResult safeadd(int a, int b)
{
    struct SafeResult result;
    result.value = a + b;

    return result;
}

struct SafeResult safesubtract(int a, int b)
{
    struct SafeResult result;
    result.value = a - b;

    return result;
}

struct SafeResult safemultiply(int a, int b)
{
    struct SafeResult result;
    result.value = a * b;

    return result;
}

struct SafeResult safedivide(int a, int b)
{
    struct SafeResult result;
    result.value = a / b;

    return result;
}

struct SafeResult safectoint(char c[])
{
    struct SafeResult result;
    result.value = 0;
    int sign = 0;
    int i = 0;

    while (c[i] != '\0')
    {
        result.errorflag = 0;

        if ((c[i] < '0' || c[i] > '9') && !(i == 0 && c[i] == '-'))
        {
            result.errorflag = 1;
            break;
        }
        else if (i == 0 && c[i] == '-')
        {
            sign = 1;
            continue;
        }
        else
        {
            if (safemultiply(result.value, 10).errorflag)
            {
                result.errorflag = 1;
                break;
            }
            else
            {
                result.value = safemultiply(result.value, 10).value;

                if (safeadd(result.value, c[i] - '0').errorflag)
                {
                    result.errorflag = 1;
                    break;
                }
                else
                    result.value = safeadd(result.value, c[i] - '0').value;
            }
        }
    }

    if (sign && !result.errorflag)
        result.value = -result.value;

    return result;
}