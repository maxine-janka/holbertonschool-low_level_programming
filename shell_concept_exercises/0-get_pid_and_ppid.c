#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid_t ppid;
	
	pid = getpid();
	ppid = getppid();

	printf("The process/child ID is %u\n", pid);
	printf("The parent process ID is %u\n", ppid);

	return (0);
}
