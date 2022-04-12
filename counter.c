#include "main.h"

/**
 *counter - count the namber of tokens
 *@strc: the string
 *Return: the namber of tokens or 0
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
