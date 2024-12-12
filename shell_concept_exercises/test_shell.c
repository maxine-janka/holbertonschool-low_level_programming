#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

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

    if (buffer[bytes_read - 1] == '\n')
        buffer[bytes_read - 1] = '\0';

    return buffer;
}

/**
 * execute_command - Executes a command using execve.
 * @command: Command to execute.
 *
 * Return: None.
 */
void execute_command(char *command)
{
    pid_t child_pid;
    int status;
    char *argv[20];

    argv[0] = command;
    argv[1] = NULL;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error forking");
        return;
    }

    if (child_pid == 0)
    {
        if (execve(command, argv, NULL) == -1)
        {
            perror("Error");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        wait(&status);
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

        if (strlen(line) == 0 || strspn(line, " \t") == strlen(line))
        {
            free(line);
            continue;
        }

        execute_command(line);
        free(line);
    }

    return 0;
}

