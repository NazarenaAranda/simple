#include "main.h"

/**
 * _atoi - string a integer
 * @jeje: string to convert
 * Return: sum
 */

int _atoi(char *jeje)
{
	int sum = 0;

	while (*jeje)
	{
		if (*jeje >= '0' && *jeje <= '9')
		{
			sum *= 10;
			sum = sum + (*jeje - '0');
			jeje++;
		}
		else
		{
			return (-1);
		}

	}
	return (sum);
}
