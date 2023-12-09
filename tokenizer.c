#include "shell.h"
/**
 * tokenizer - Tokenizes a line into an array of strings
 *
 * @line: Input line to be tokenized
 *
 * Returns:
 *   - An array of strings containing the tokens
 *   - NULL if an error occurs or if the input line is NULL
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
	free(copy);
	copy = NULL;

	/* Allocate memory for the array of strings to store the tokens */
	command = malloc (sizeof(char*) * (cpt + 1));
	if(!command)
	{
		free(line);
		return (NULL);
	}

	/* Tokenize the original input line and store the tokens in the array */
	token = strtok(line, DELIM);

        while(token)
        {
			/* Duplicate each token and store it in the array */
            command[i] = _strdup(token);
            token = strtok(NULL, DELIM);
			i++;
        }
		
	/* Free the original input line*/
	free(line);
	line = NULL;
	command[i] = NULL;

	return(command);

}
