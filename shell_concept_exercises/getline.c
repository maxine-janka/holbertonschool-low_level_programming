#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 256; /*size of the buffer*/
	char *buff = NULL; /*getline will create a buffer, n will be ignored*/

	printf("$ ");
    	/*pass in the addresses of the buffer, the size and the string from stdin*/
	getline(&buff, &n, stdin); 

	printf("%s", buff);
	free(buff);
	return (0);
}
