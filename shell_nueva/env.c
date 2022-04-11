#include "main.h"

int printenv(char **env, int *stad_exit)
{
	unsigned int i;

	for (i = 0; env[i] != NULL; i++)
	{
		print_string(env[i]);
		write(STDOUT_FILENO, "\n", 1);
	}

	*stad_exit = 0;
	return (0);
}

void print_string(char *env)
{
	int i;

	for (i = 0; env[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, env, i);
}
