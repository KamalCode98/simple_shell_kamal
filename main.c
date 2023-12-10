#include "shell.h"

/**
 * main - simple shell main function
 *
 * @ac: Count of arguments
 * @av: Argumengts
 *
 * Return: 0 always (Success)
 */

int main(int ac, char **argv)
{
	char *line = NULL;
	char **command = NULL;
	int status;
	int i;
	(void) ac;

	/* Infinite loop for the shell to keep accepting commands */
	while (1)
	{
		line = read_line();

		if (line == NULL) 
		{
			/* Print a newline if the program is running in an interactive shell */
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		/* Tokenize the input line into a command */
		command = tokenizer(line);

		if (!command)
			continue;
		/* Execute the command and get its status */
		status = _execute(command, argv);
	}

}