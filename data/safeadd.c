#include <stdio.h>
#include "safeint.h"

int main(int argc, char **argv)
{
    struct SafeResult result = safeadd(safestrtoint(argv[1]).value, safestrtoint(argv[2]).value);

    printf("Result: %d\n", result.value);
    printf("Error Flag: %c\n", result.errorflag);
    return 0;
}
