#include <stdio.h>
#include "mystrings.h"


int strlenght(char a[])
{
    int count = 0;
    while(1){
        if(a[count] == '\0') return count;
        count++;
    }
}

void strconcat(char a[], char b[])
{
    int lenght = strlenght(a) + strlenght(b);
    for(int i = 0; i < strlenght(b); i++){
        a[strlenght(a) + i] = b[i];
    }

    a[lenght] = '\0';
    printf("%s", a);
}

int strcompare(char a[], char b[])
{
    int i = 0;
    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] < b[i])
            return -1;
        else if(a[i] > b[i])
            return 1;

        i++;
    }

    if (a[i] == '\0' && b[i] == '\0')
        return 0;
    else if (a[i] == '\0')
        return -1;
    else
        return 1;
}