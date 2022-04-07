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
<<<<<<< HEAD
char *str_concat(char *s1, char *s2);
int main();
void cd(char* args[]);
void executeCommand(char* args[]);
int _strcmp(char *s1, char *s2);
=======

void cd(char* args[]);
void executeCommand(char* args[]);
int _strcmp(char *s1, char *s2);
char *str_concat(char *s1, char *s2);

>>>>>>> f681ba5872dccb9a884ab858fd8443c468a5eb7a
#endif
