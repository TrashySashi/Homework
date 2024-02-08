#include <stdio.h>
#include "processes.h"

int main()
{
    int option = 0;
    char name[30];
    int number = 0;

    do
    {
        printf("Choose an option:\n");
        printf("1. Create a process.\n");
        printf("2. List of processes.\n");
        printf("3. Stop a process.\n");
        printf("4. Exit.\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            if (processescount >= 5)
            {
                printf("Error: The maximum number of processes has been reached. Stop a process before creating a new one.\n");
                break;
            }
            else
            {
                printf("Please enter the name of the process: ");
                scanf("%s", name);
                int processID = createnewprocess(name);
                if (processID != 0)
                {
                    printf("Process created with ID: %d\n", processID);
                }
                else
                {
                    printf("Error: Unable to create a new process.\n");
                }
                break;
            }
        case 2:
            for (int i = 0; i < processescount; i++)
            {
                printf("| %2d | %30s |\n", processes[i].id, processes[i].name);
            }
            break;
        case 3:
            printf("Please enter the ID of the process you want to stop: ");
            scanf("%d", &number);
            if (number > 0)
            {
                stopprocess(number);
            }
            else
            {
                printf("Error: Invalid process ID.\n");
            }
            break;
        case 4:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Error: Invalid option.\n");
            break;
        }
    } while (option != 4);

    return 0;
}
