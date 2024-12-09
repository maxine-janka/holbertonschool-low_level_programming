#include <stdio.h>
#include <unistd.h>

int main (void)
{
	pid_t pid;
	printf("Before fork I was one\n");
	pid = fork(); /* create a new process*/

	if (pid == -1)
	{	
		/* if fork fails*/
		perror("Unsuccessful\n");
			return 1;
	}
	if (pid == 0)
	{
		/* this runs in the child process*/
		printf("I am the child process, my PID is %u\n", getpid());
	}
	else
	{
		/* this runs in the parent process*/
		printf("I am the parent process, and the PID of my child is %u\n", pid);
	}
	return (0);

}
