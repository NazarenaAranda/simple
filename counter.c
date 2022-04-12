#include "main.h"

/**
 *counter - cuenta los tokens
 *@strc: string
 *Return: tokens o 0
 */
int counter(char *strc)
{
	int tc;
	int a;

	tc = 0;
	a = 0;

	while (strc[a] == ' ' && strc[a] != '\0')
		a++;
	if (strc[a] == '\0' || strc[a] == '\n')
		return (0);

	while (strc[a] != '\0')
	{
		tc++;
		while (strc[a] != ' ' && strc[a] != '\0')
			a++;

		while (strc[a] == ' ' && strc[a] != '\0')
			a++;


	}
	return (tc);
}
