#include "main.h"

int main()
{
	while(1)
	{
		size_t read_bytes;
		size_t bufsize = 0;
		char *input = NULL;
		char *command;
		char *args[TOKEN_LIMIT];
		int numTokens;
		ssize_t save;
		char * tokens[TOKEN_LIMIT]; //TOKEN_LIMIT esta dentro de tokens


		write(STDOUT_FILENO, "#cisfun$ ", 9); //Promp muestra la shell en la pantalla
		save = getline(&input,&bufsize,stdin);//guarda en "input" lo que recibe del usuario

		if (save == -1)
		{
			write(STDOUT_FILENO, "\n",1);
			return (-1);
		}
	


		if((args[0] = strtok(input," \n\t")) == NULL) continue; //si pulso enter volvemos al inicio, vuelve a aparecer "$ "
		
		
		numTokens = 1;
		while((args[numTokens] = strtok(NULL, " \n\t")) != NULL) numTokens++;

		if(!strcmp("exit", args[0])) break;
		if(!strcmp("cd", args[0])) cd(args);

		executeCommand(args);
	}
	
	return (0);
}
void executeCommand(char* args[])
{
	extern char **environ;
	pid_t pid;
        pid = fork();

	int _strcmp(char *s1, char *s2)
	{
		s1 = "/bin/";
		s2 = args[0];
	}


	if(pid == -1)
	{
		printf("Error creating process\n");
		return;
	}

	if(pid==0)
	{
		if (execve(args[0],args,environ)==-1)
		{
			printf("Command not found");
			kill(getpid(),SIGTERM); 
		}	//SIGTERM es laSeñal que se envía el proceso para comunicarle un apagado “amable” (cerrando conexiones, ficheros y limpiando sus propios búfer).
	}

	waitpid(pid,NULL,0);
}	//suspende la ejecución del proceso de llamada hasta que un hijo especificado por el argumento pid haya cambiado de estado. Ejemplo: waitpid(-valor del pid-, &status, 0)

