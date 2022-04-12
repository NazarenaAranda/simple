#include "main.h"

/**
 *str_len - length of a string
 *@strc: pointer
 *Return: length of a string or 0
 */
int str_len(char *strc)
{
	int a;

	a = 0;

	while (strc[a] != '\0')
	{
		a++;
	}

	return (a);
}
