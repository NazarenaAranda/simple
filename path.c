#include "main.h"

/**
 * linkedpath - linked list del PATH
 * Return: head
 */
PDIRECT *linkedpath(void)
{
	char *path, *token = NULL, *delim = ":";
	PDIRECT *head, *temp, *temp2;

	head = malloc(sizeof(PDIRECT));
	if (!head)
		return (NULL);
	head->next = NULL;

	path = _strdup(_getenv("PATH"));

	token = _str_token(path, delim);
	head->strc = token;

	temp = head;
	while (token != NULL)
	{
		token = _str_token(NULL, delim);
		if (token != NULL)
		{
			temp2 = malloc(sizeof(PDIRECT));
			temp2->strc = token;
			temp2->next = NULL;
			temp->next = temp2;
			temp = temp2;
		}
	}
	free(path);
	return (head);
}
