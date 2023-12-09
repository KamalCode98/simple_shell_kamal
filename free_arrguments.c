#include "shell.h"

void free_arrguements(char **arrguments)
{
    int i;

	if (!arrguments)
			return;

		for (i = 0; arrguments[i]; i++)
		{
			free(arrguments[i]);
			arguments[i] = NULL;
		}
        
		free(arguments);
		arguments = NULL;
}