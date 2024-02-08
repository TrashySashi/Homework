#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[])
{
    if(argv[1] <= 50 && argv[2] <= 50){
        strcompare(argv[1], argv[2]);
    }
    
    return 0;
}