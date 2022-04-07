#include "main.h"
/**
* str_concat - concatenate string
* @s1: string 1
* @s2: string 2
* Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *a;
	int b, c, d, e = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (c = 0; s1[c] != '\0'; c++)
		;
	b = 0;
	while (s2[b] != '\0')
	{
		c++;
		b++;
	}
	c++;

	a = malloc(sizeof(char) * c);
	if (a == NULL)
		return ('\0');
	b = 0;
	e = 0;

	for (d = 0; d < c; d++)
	{
		if (s1[d] == '\0')
			e = 1;
		if (e == 0)
		a[d] = s1[d];
		if (e == 1)
		{
			a[d] = s2[b];
			b++;
		}
	}
return (a);
}
