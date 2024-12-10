#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split_string(char *buffer)
{
	char *token, **command;
	const char *delim = " \t\n\r";
	int i;
	
	command = malloc((sizeof(char *)) * strlen(buffer));
	if (command == NULL)
		return (NULL);
	token = strtok(buffer, delim);
	if (token == NULL)
	{
		free(command);
		return (NULL);
	}
	i = 0;
	while (token != NULL)
	{
		command[i] = token;
		i++;
		token = strtok(NULL, delim);
	}
	command[i] = '\0';
	return (command);
}
int main(void)
{
	char input[] = "This is a string";
	char **tokens;
	int i;

	tokens = split_string(input);
	for (i = 0; tokens[i] != NULL; i++)
		printf("Token[%d]: %s\n", i, tokens[i]);

	return (0);
}

