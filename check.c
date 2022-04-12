#include "main.h"

/**
 * checkenv - ver si el token es env
 * @p: argumentos de usuario
 * Return: si el usuario ingresó el comando devuelve 1
 * sino 0
 */
int checkenv(char **p)
{
	char command[] = "env";
	int i = 0;

	if (_strcmp(*p, command) == 0)
	{
		while (environ[i])
		{
			write(STDOUT_FILENO, environ[i], str_len(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
			i++;
		}
		return (1);
	}

	return (0);
}
