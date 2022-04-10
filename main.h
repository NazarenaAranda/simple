#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/types.h>

#define TOKEN_LIMIT 1024

void cd(char* args[]);
void executeCommand(char* args[]);
int _strcmp(char *s1, char *s2);
char *str_concat(char *s1, char *s2);

#endif
