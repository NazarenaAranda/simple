#include "main.h"

/**
 *str_len - largo de una string
 *@strc: puntero
 *Return: longitud o 0
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
