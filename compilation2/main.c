#include <stdio.h>
#include <string.h>
#include "transformation.h"


int main()
{
    char array[100];
    printf("\nEnter string: ");
    scanf("%s", array);

    int i = 0, number = 0;
    struct transformation answer;

    while(array[i] != '\0'){
        if(array[0] == '-') i++;
        if(array[i] >= '0' && array[i] <= '9'){
            number = 1;
        }
        else{
            number = 0;
            break;
        }
        i++;
    }

    if(number){
        answer = string_to_number(array); 
    }
    else{
        answer.result = 0;
        strcpy(answer.error, "Invalid input string");
    }

    printf("tmp.result = %ld, tmp.error = %s", answer.result, answer.error);

    return 0;
}