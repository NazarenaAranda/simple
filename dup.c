#include "main.h"

/**
 *_strdup - duplicate string
 *@jeje: string a duplicate
 *Return: duplicated string
 */
char *_strdup(char *strc)
{
	char *d = NULL;
	unsigned int a, length = 0;

	length = str_len(strc);
	d = malloc(sizeof(char) * length + 1);
	if (!d)
		return (NULL);
	for (a = 0; strc[a] != '\0'; a++)
	{
		d[a] = strc[a];
	}
	d[a] = '\0';
	return (d);
}
