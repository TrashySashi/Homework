#ifndef _PROCESS_
#define _PROCESS_

struct Process
{
    int id;
    char name[30];
};

extern struct Process processes[5];
extern int processescount;

int nextprocessid();
int createnewprocess(char new_name[]);
void stopprocess(int process_id);

#endif