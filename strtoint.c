#include "main.h"

/**
 * _atoi - string a integer
 * @strc: string to convert
 * Return: sum
 */
int _atoi(char *strc)
{
	int sum = 0;

	while (*strc)
	{
		if (*strc >= '0' && *strc <= '9')
		{
			sum *= 10;
			sum = sum + (*strc - '0');
			strc++;
		}
		else
		{
			return (-1);
		}
	}

	return (sum);
}
