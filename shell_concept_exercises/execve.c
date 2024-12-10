#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *argv[] = {"ls", "-l", NULL};
	char *envv[] = {"NULL"};

	printf("before execve\n");
	if (execve("/bin/ls", argv, envv) == -1);
	{
		perror("Error");
	}
	printf("done execve\n");
	return (0);
}
