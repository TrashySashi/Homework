#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

int main()
{
    struct School{
        struct SchoolClass classes[20];
        struct SchoolRoom room[10];
    };

    struct School school1;


    return 0;
}