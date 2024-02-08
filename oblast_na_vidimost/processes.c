#include <stdio.h>
#include <string.h>
#include "processes.h"

struct Process processes[5];
int processescount = 0;

int nextprocessid()
{
    static int curr_id = 1;

    if (processescount < 5)
    {
        return curr_id++;
    }
    else
        return 0;
}

int createnewprocess(char new_name[])
{
    int new_id = nextprocessid();

    if (new_id != 0)
    {
        if (strlen(new_name) <= 30)
        {
            processes[processescount].id = new_id;
            strcpy(processes[processescount].name, new_name);
            processescount++;
            return new_id;
        }
        else
            return 0;
    }
    else
        return 0;
}

void stopprocess(int process_id)
{
    for (int i = 0; i < process_id; i++)
    {
        if (processes[i].id == process_id)
        {
            for (int j = i; j < processescount - 1; j++)
            {
                processes[j] = processes[j + 1];
            }
            processescount--;
        }
    }
}
