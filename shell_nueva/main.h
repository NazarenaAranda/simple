#ifndef JP_RM_LM_H
#define JP_RM_LM_H

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
 *struct direc - structure for the implementation of Linkedlist (PATH)
 *@jeje: directory path
 *@next: pointer a next node
 */
typedef struct direc
{
	char *jeje;
	struct direc *next;
} PDIRECT;

/**
 *struct chdirect - structure for function cd
 *@jeje: directory path
 *@cde: indicated to cd calling
 */
typedef struct chdirect
{
	char *jeje;
	int cde;
} CHDIRECT;

char *_getenv(const char *name);
int checkenv(char **p);
int main(int argc __attribute__ ((unused)), char **argv);
char *_str_token(char *jeje, char *d);
int str_len(char *jeje);
int counter(char *jeje);
void _itoa(int a, char *c);
int changedir(char **p, CHDIRECT *predirect);
int _strcmp(char *s1, char *s2);
char *_strdup(char *jeje);
char *findcommand(PDIRECT *head, char *commandinput);
void _itoa(int a, char *c);
PDIRECT *linkedpath(void);
int _atoi(char *jeje);
int checkexit(char **token);
void __exit(int errnum, char **p, char *getline, PDIRECT *head, char *fc,
	    char *predirect);
void errmessage(char **c, char *p, int i);
void CDerrmessage(char **c, char *p, int i);
extern char **environ;

#endif
