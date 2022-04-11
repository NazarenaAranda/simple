#include "main.h"

char *_strncat(char *dest, char *src)
{
	int leng = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[leng + i] = src[i];
	dest[leng + i] = '\0';
	return (dest);
}
