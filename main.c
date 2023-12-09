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
		if (!command)
			continue;

		for (i = 0, command[i]; i++)
>>>>>>> 8c2739899bae3cbefe350220616a46d18c353efa
			printf("%s\n", command[i]);



		//status = _execute(command, argv);
	}

}
