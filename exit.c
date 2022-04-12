#include "main.h"

/**
 * checkexit - implementa exit incorporado y sale con errores #
 *@token: cadenas de comandos de usuario
 * Return: Si el usuario ingresó exit, devuelve ingresó errnum
 */
int checkexit(char **token)
{
	char check[] = "exit";
	int errnumber = 0;

	if (_strcmp(token[0], check) == 0)
	{
		if (token[1])
		{
			errnumber = _atoi(token[1]);
		}
		if (errnumber == -1)
			return (2);
		else
			return (errnumber);
	}
	return (-1);
}

/**
 * __exit - memoria libre
 * @errnum: sale con número de error
 * @p: almacenar comandos
 * @getline: puntero a malloc desde la función getline
 * @head: cabeza de lista enlazada
 * @fc: malloc de la función PATH
 * @predirect: directorio anterior malloc
 */

void __exit(int errnum, char **p, char *getline, PDIRECT *head, char *fc,
	    char *predirect)
{
	PDIRECT *tmp;

	if (p)
		free(p);
	if (getline)
		free(getline);
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	if (fc)
		free(fc);
	if (predirect)
		free(predirect);
	exit(errnum);
}
