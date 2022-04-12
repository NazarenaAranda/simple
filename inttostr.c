#include "main.h"

/**
 * _itoa - entero a ascii
 * @a: num
 * @c: string
 */
void _itoa(int a, char *c)
{
	int b;
	int rem = 0;
	int coun = 0;
	char temp;

	if (a == 0)
	{
		c[0] = '0';
		c[1] = '\0';
	}

	while (a != 0)
	{
		rem = a % 10;
		c[coun++] = rem + '0';
		a = a / 10;
	}

	for (b = 0; b < coun / 2; b++)
	{
		temp = c[b];
		c[b] = c[coun - 1 - b];
		c[coun - 1 - b] = temp;
	}

	c[coun] = '\0';

}
