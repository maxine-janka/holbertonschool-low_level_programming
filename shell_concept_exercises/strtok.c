#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "I love coding"; /*string to tokenize*/
	char *delim = " ";
	char *token; /*ptr that will hold token returned by strtok*/

	token = strtok(str, delim); /*strtok is called, I will be stored in token*/

	while (token != NULL)
	{
		printf("%s\n", token); /*I is printed*/
		/*strtok is called on same string and love is stored in token, its not NULL so it prints, call again*/
		/* When no more tokens, the token is NULL and exit the loop*/
		token = strtok(NULL, delim);
	}
	return (0);
}
