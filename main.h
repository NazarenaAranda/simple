#define SHELL
#ifndef SHELL
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#define TOKEN_LIMIT 100
void cd(char* args[]);
void executeCommand(char* args[]);
#endif
