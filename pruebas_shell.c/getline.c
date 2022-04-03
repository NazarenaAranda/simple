#include <stdio.h>
#include <stdlib.h>

int main(char *s,int length)
{
    char *buffer;
    size_t bufsize = 0;
    char texto;


    printf("$ ");
    texto = getline(&buffer,&bufsize,stdin);
    printf("%s",buffer);

    if (buffer != NULL)
    {
	  }
    return(0);
}
