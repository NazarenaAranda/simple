#include "main.h"

/**
 * changedir - cambiar directorio
 * @p: comandos del usurio
 * @predirect: directorio anterior
 * Return: 0
 */
int changedir(char **p, CHDIRECT *predirect)
{
	char cd[] = "cd", firulete[] = "~", barra[] = "-", *strc, *temp;

	if (_strcmp(p[0], cd) == 0)
	{

		predirect->cde = 1;
		if (p[1] == NULL ||  _strcmp(p[1], firulete) == 0)
		{
			strc = _getenv("HOME");
			free(predirect->strc);
			predirect->strc = _strdup(_getenv("PWD"));
			chdir(strc);
		}
		else if (_strcmp(p[1], barra) == 0)
		{
			temp = _strdup(_getenv("PWD"));
			chdir(predirect->strc);
			write(STDOUT_FILENO, predirect->strc, str_len(predirect->strc));
			write(STDOUT_FILENO, "\n", 1);
			free(predirect->strc);
			predirect->strc = temp;
		}
		else
		{
			temp = _strdup(_getenv("PWD"));
			if (chdir(p[1]) == -1)
			{
				free(temp);
				return (-1);
			}
			else
			{
				free(predirect->strc);
				predirect->strc = temp;

			}
		}
	}
	return (0);
}
