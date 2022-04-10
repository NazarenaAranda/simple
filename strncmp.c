#include <stdio.h>
#include <string.h>
#include "main.h"

char *strncmp (char *s1, const char *s2, size_t n)
{
	char string1[5];
	char string2[5];
	int i;

	strcpy(string1, "PATH=");
	strcpy(string2, "PATH=");

	i = strncmp(string1, string2, 5);

	if(i < 0)
	{      
	printf("s1 is less than s2");
	} 
	else if(i > 0)
	{      
	printf("s2 is less than s1");
   	}
	else
	{
    printf("s1 is equal to s2");
    }
   
    return(0);
}
