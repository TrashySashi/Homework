#include <stdio.h>
#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE) (void)

DEFINE_COMMAND(quit, internal){
    printf("Hello ");
}

DEFINE_COMMAND(quit, external)
{
    printf("world");
}


int main()
{
    internal_quit_command();
    external_quit_command();

    return 0;
}