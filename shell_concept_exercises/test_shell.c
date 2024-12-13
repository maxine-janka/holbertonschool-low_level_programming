#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * _strlen - Counts the number of characters in an array of characters
 * @str: string
 * Return: length of the array characters
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
} 
/**
 * white_space - Finds the length of the string that only contains
 *               spaces or tabs.
 * Return: 1 if string only contains whitespace.
 *         0 if contains other characters.
 */ 
 int white_space(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
		i++;
	}
	return 1;
}


/**
 * read_line - Reads a line of input from the user.
 *
 * Return: Pointer to the dynamically allocated input string, or NULL on EOF.
 */
char *read_line(void)
{
    char *buffer = NULL;
    size_t buffer_size = 0;
    ssize_t bytes_read;

    bytes_read = getline(&buffer, &buffer_size, stdin);

    if (bytes_read == -1)
    {
        free(buffer);
        return NULL;
    }

    buffer[bytes_read - 1] = '\0';

    return buffer;
}

/**
 * execute_command - Executes a command using execve.
 * @command: Command to execute.
 *
 * Return: None.
 */
void execute_command(char *line)
{
	char *token;
	int i = 0, status;
	pid_t child;
	char **str;

	str = malloc(sizeof(char *) * 256);
	if (str == NULL)
	{
		perror("malloc fail");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " \n\t");
	while (token != NULL)
	{
		str[i] = token;
		token = strtok(NULL, " \n\t");
		i++;
	}
	str[i] = NULL;


    child = fork();
    if (child == -1)
    {
        perror("Error forking");
	free(str);
        return;
    }

    if (child == 0)
    {
        if (execve(str[0], str, NULL) == -1)
        {
            perror("Error");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait(&status);
	free(str);
    }
}

/**
 * main - Entry point for the shell program.
 *
 * Return: 0 on success, or appropriate error code.
 */
int main(void)
{
    char *line;

    while (1)
    {
        if (isatty(STDIN_FILENO))
            write(STDOUT_FILENO, "$ ", 2);

        line = read_line();

        if (line == NULL)
        {
            if (isatty(STDIN_FILENO))
                write(STDOUT_FILENO, "\n", 1);
            break;
        }

        if (_strlen(line) == 0 || white_space(line))
        {
            free(line);
            continue;
        }

        execute_command(line);
        free(line);
    }

    return 0;
}
