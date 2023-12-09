#include "shell.h"
/**
 *
 *
 *
 */

char **tokenizer(char *line)
{
	char *token = NULL;
       	char *copy = NULL;
	char **command = NULL;
	int cpt = 0, i = 0;

	if (!line)
		return (NULL);

	copy = _strdup(line);
	token = strtok(copy, DELIM);

	while(token)
	{
		cpt++;
		token = strtok(NULL, DELIM);
	}
	free(copy), copy = NULL;

	command = malloc (sizeof(char*) * (cpt + 1));
	if(!command)
	{
		free(line);
		return (NULL);
	}

	token = strtok(line, DELIM);

        while(token)
        {
                command[i] = token;
                token = strtok(NULL, DELIM);
		i++;
        }
	free(line), line = NULL;
	command[i] = NULL;
	return(command);

}
