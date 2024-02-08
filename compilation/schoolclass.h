#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

struct SchoolClass{
    struct Person students[20];
    char clas;
    int class_number;
    struct Person teacher;

};
#endif