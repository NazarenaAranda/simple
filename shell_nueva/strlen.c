#include "main.h"
/**
 * str_len - length of a string
 * @jeje: pointer
 * Return: length of a string or 0
 */

int str_len(char *jeje)
{
	int a;

	a = 0;

	while (jeje[a] != '\0')
	{
		a++;
	}
	return (a);
}
