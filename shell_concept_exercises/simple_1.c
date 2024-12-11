#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>       

void ctrl_d(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "\n", 1);
	exit (0);
}

int main (void)
{
	char *buff = NULL;
        size_t buff_size = 0;
        char *token;
        int i = 0, status;
        char **str;
        pid_t child;


	while (1) /*while true*/
        {
		if (isatty(STDIN_FILENO)) /*check if running in term*/
		{
			write(STDOUT_FILENO, "$ ", 2); /*write prompt*/
		}
                if (getline(&buff, &buff_size, stdin) == -1) /*read usr input*/
		{
			free(buff);
			ctrl_d();
			break;
		}

                str = malloc(sizeof(char *) * 256);

                token = strtok(buff," \t\n\r"); /*collect first token*/

                while (token != NULL) /*array gets rest of tokens*/
                {
                        str[i] = token;
                        token = strtok(NULL, " \t\n\r");
                        i++;
                }
                str[i] = NULL; /*end with null term*/
                child = fork();
                if (child == -1)
                {
                        perror("error");
                        free(str);
                        return (1);
                }

                if (child == 0)
                {
                        if (execve(str[0], str, NULL) == -1)
                                perror("error");
                                exit (1);
                }
                else
                {
                        wait(&status);
                }
                i = 0;
                free(str);
        }
        free(buff);
        return (0);
}
