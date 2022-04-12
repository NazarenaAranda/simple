#include "main.h"

/**
 *_str_token - tokenizar una string
 *@strc: string a tokenizar
 *@d: delimitador a sstring
 *Return: token or 0
 */
char *_str_token(char *strc, char *d)
{
	static int strcpoint, large;
	int a = 0, b = 0;
	static char *cpy;

	if (strc != NULL)
	{
		large = str_len(strc);
		while (strc[a] != '\0')
		{
			for (b = 0; d[b] != '\0'; b++)
			{
				if (strc[a] == d[b])
					strc[a] = '\0'; }
			a++;
		}
		a = 0;
		while (strc[a] == '\0' && a < large)
			a++;

		strcpoint = a;

		if (strc[a] != '\0')
		{
			cpy = strc;
			return (strc + a); }
		return (NULL);
	}
	else
	{
		a = strcpoint;
		strc = cpy;
		while (strc[a] != '\0' && a < large)
			a++;
		while (strc[a] == '\0' && a < large)
			a++;
		strcpoint = a;
		if (strc[a] != '\0')
			return (strc + a);
		return (NULL);
	}
}
