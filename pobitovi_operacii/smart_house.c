#include <stdio.h>

int main()
{
    unsigned char lamps = 0;
    int switch_lights = 0;
    unsigned char light1 = 1 << 0;
    unsigned char light2 = 1 << 1;
    unsigned char light3 = 1 << 2;
    unsigned char light4 = 1 << 3;
    unsigned char light5 = 1 << 4;
    unsigned char light6 = 1 << 5;
    unsigned char light7 = 1 << 6;
    unsigned char light8 = 1 << 7;
    char option = 0;
    do
    {
        printf("Choose an option \n");
        printf("Option 1: Switch lights\n");
        printf("Option 2: Print state\n");
        printf("1/2: ");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Eenter lamp: ");
            scanf("%d", &switch_lights);

            switch (switch_lights)
            {
            case 1:
                lamps = lamps ^ light1;
                break;
            case 2:
                lamps = lamps ^ light2;
                break;
            case 3:
                lamps = lamps ^ light3;
                break;
            case 4:
                lamps = lamps ^ light4;
                break;
            case 5:
                lamps = lamps ^ light5;
                break;
            case 6:
                lamps = lamps ^ light6;
                break;
            case 7:
                lamps = lamps ^ light7;
                break;
            case 8:
                lamps = lamps ^ light8;
                break;
            default:
                break;
            }
        }

    } while (option != 2);

    int lamps_on[8];
    int j = 0;
    for (int i = 7; i >= 0; i--)
    {
        if ((lamps >> i) & 1)
        {
            lamps_on[j] = i + 1;
            j++;
        }
    }

    int arrlen = j;

    printf("The light is on in rooms: ");
    for (int i = 0; i < arrlen; i++)
    {
        printf("%d ", lamps_on[i]);
    }

    return 0;
}