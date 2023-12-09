#include "shell.h"
/**
 * read_line - Reads a line of input from the user
 *
 * Returns:
 *   - A pointer to the dynamically allocated string containing the input line
 *   - NULL if an error occurs or the end of file is reached
 */
char *read_line(void)
{
	char *line = NULL; /* Pointer to store the input line */
	size_t len = 0; /* Initial length of the line buffer */
	ssize_t n; /*  Number of characters read */

	/* If the program is running in an interactive shell, print the prompt */
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO,"$ ", 2);

	/* Read a line of input from the user */
	n = getline(&line, &len, stdin);

	/* Check for errors or end of file */
	if (n == -1)
	{
		free(line);
		return (NULL);
	}	

	return(line);
}
