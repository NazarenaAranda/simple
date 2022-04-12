#include "main.h"

void cd(char* args[])
{
        if (chdir(args[1]) == -1) //cambia el directorio de trabajo actual
        {
                printf("Directory %s not found\n", args[1]);
        }
}
