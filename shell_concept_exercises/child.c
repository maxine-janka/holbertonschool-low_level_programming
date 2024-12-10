#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(void) 
{
	pid_t child;
	int status;
	int i = 0;
	char *args[] = {"ls", "-l", NULL};

	while (i < 5)
	{
		child = fork ();
		if (child == -1)
		{
			perror("error:");
			return (1);
		}
		if (child == 0)
		{
			execve("/bin/ls", args, NULL);
			perror("execve error:");
			exit (1);
		}
		else
		{
			wait(&status);
		}
		i++;
	}

	return (0);
}
