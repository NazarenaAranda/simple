#include "main.h"

/**
 * *_getenv - valor de environ
 * @name: aceder al env
 * Return: puntero
 */
char *_getenv(const char *name)
{
	int i = 0, j, len = 0;

	if (!name)
	{
		return (NULL);
	}
	else
	{
		while (name[len] != '\0')
			len++;
	}

	while (environ[i])
	{

		for (j = 0; j < len && *(environ[i] + j) != '\0'; j++)
		{
			if (name[j] != *(environ[i] + j))
				break;

			if (j == len - 1)
				return (environ[i] + j + 2);
		}

		i++;
	}

	return (NULL);
}
