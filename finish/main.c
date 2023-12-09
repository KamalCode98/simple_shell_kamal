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
	(void) ac;
	(void)argv;

	while (1)
	{
		line = read_line();
		if (line == NULL) /*Case EOD CTRL+D*/
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}


		command = tokenizer(line);

		//status = _execute(command, argv);
	}

}