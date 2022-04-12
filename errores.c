#include "main.h"
/**
 * errmessage: mensaje de error cuando no exite el comando
 * @c: comando que pone el usuario
 * @p: nombre del programa
 * @i: número de comandos del usuario durante el programa
 * Retorno: 0
 */
void errmessage(char **c, char *p, int i)
{
	char *t;

	t = malloc(sizeof(char) * i);
	_itoa(i, t);
	write(STDOUT_FILENO, p, str_len(p));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, t, str_len(t));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, c[0], str_len(c[0]));
	write(STDOUT_FILENO, ": not found\n", 12);

	free(t);
}
/**
 * CDerrmessage  - error de cd
 * @c: comando del usuario
 * @p: nombre del programa
 * @i: numero de comandos del usuario
 */
void CDerrmessage(char **c, char *p, int i)
{
	char *t;

	t = malloc(sizeof(char) * i);
	_itoa(i, t);
	write(STDOUT_FILENO, p, str_len(p));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, t, str_len(t));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, c[0], str_len(c[0]));
	write(STDOUT_FILENO, ": can't cd to ", 14);
	write(STDOUT_FILENO, c[1], str_len(c[1]));
	write(STDOUT_FILENO, "\n", 1);

	free(t);
}
