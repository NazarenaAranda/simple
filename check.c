#include "main.h"

/**
 * checkenv - checks to see if the token is the env
 * @p: user supplies command line arguments
 * Return: returns 1 if user entered the command; zero otherwise
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
