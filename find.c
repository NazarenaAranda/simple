#include "main.h"

/**
 * findcommand - stat to find a file in the path
 * @head: head linked list of path directories
 * @commandinput: user entered command to check in the path
 * Return: pointer to full path;
 */
char *findcommand(PDIRECT *head, char *commandinput)
{

	char *buf;
	int commandinputlen = 0, dirlen = 0, i, j;


	commandinputlen = str_len(commandinput);
	while (head != NULL)
	{
		dirlen = str_len(head->strc);

		buf = malloc(sizeof(char) * (commandinputlen + dirlen) + 2);
		if (!buf)
			return (NULL);

		for (i = 0; i < dirlen; i++)
		{
			buf[i] = (head->strc)[i];
		}
		buf[i++] = '/';
		for (j = 0; j < commandinputlen; j++)
		{
			buf[j + i] = commandinput[j];
		}
		buf[j + i] = '\0';

		if (access(buf, X_OK) == 0)
		{
			return (buf);

		}

		free(buf);
		head = head->next;
	}

	return (NULL);
}
