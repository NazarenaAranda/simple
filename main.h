#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>

/**
 *struct direc - estructura de Linkedlist (PATH)
 *@strc: directorio path
 *@next: siguiente nodo
 */
typedef struct direc
{
	char *strc;
	struct direc *next;
} PDIRECT;

/**
 *struct chdirect - estructura para cd
 *@strc: directorio path
 *@cde: llamar a cd
 */
typedef struct chdirect
{
	char *strc;
	int cde;
} CHDIRECT;

char *_getenv(const char *name);
int checkenv(char **p);
int main(int argc __attribute__ ((unused)), char **argv);
char *_str_token(char *strc, char *d);
int str_len(char *strc);
int counter(char *strc);
void _itoa(int a, char *c);
int changedir(char **p, CHDIRECT *predirect);
int _strcmp(char *s1, char *s2);
char *_strdup(char *strc);
char *findcommand(PDIRECT *head, char *commandinput);
void _itoa(int a, char *c);
PDIRECT *linkedpath(void);
int _atoi(char *strc);
int checkexit(char **token);
void __exit(int errnum, char **p, char *getline, PDIRECT *head, char *fc,
	    char *predirect);
void errmessage(char **c, char *p, int i);
void CDerrmessage(char **c, char *p, int i);
extern char **environ;

#endif
