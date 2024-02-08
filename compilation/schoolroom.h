#ifndef _SCHOOLROOM_H
#define _SCHOOLROOM_H

#include "person.h"

struct SchoolRoom{
    int room_number;
    struct Person now[50];   
};
#endif