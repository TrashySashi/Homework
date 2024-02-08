#include <stdio.h>

int main()
{
    int a = 0, b = 0, i = 0;

    printf("Enter a = ");
    scanf("%d", &a);
    printf("Enter b = ");
    scanf("%d", &b);

    if(a > b) i = a;
    else i = b;

    while(1){
        if(i % b == 0 && i % a == 0){
            printf("\nnok = %d ", i);
            break;
        }
        
        i++;
    }
}