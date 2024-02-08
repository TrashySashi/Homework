#include "transformation.h"


struct transformation string_to_number(char array[])
{
    struct transformation answer;
    int i = 0, number = 0;

    while(array[i] != '\0'){
        if(array[0] == '-'){
           i++;
           number = 1;
        } 
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
        answer.result = 0;
        answer.error[0] = '\0';
        int i = 0, sign = 0;


        while(array[i] != '\0'){
            if(i == 0 && array[i] == '-'){
                sign = 1;
                i++;
            }

            answer.result = answer.result * 10 + array[i] - '0';
            i++;

        }
        if(sign){
            answer.result = -answer.result;
        }
        }
        else{
            answer.result = 0;
            strcpy(answer.error, "Invalid input string");
        }

   
    return answer;
}