#ifndef SHELL
#define SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include <stddef.h>
#include <sys/types.h>

#define TOKEN_LIMIT 100
char *str_concat(char *s1, char *s2);
int main();
int is_history_command(char *input);
void cd(char* args[]);
void executeCommand(char* args[]);
int _strcmp(char *s1, char *s2);
int str_len(char *str);
char *getenv(const char *name);
#endif
