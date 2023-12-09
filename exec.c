#include "shell.h"
/**
 * _execute - Executes a command in a child process
 *
 * @command: Array of strings containing the command and its arguments
 * @argv: Array of strings containing the program name and its arguments
 *
 * Returns:
 *   - The exit status of the executed command
 */
int _execute(char **command, char **argv)
{
    pid_t child_process;
    int status;

    child_process = fork();
    if (child_process == 0)
    {
        if (execve(command[0], command, environ) == -1);
        {
            perror(argv[0]);
            free_arguements(command);
        }
    }
    else
    {
        waitpid(child_process, &status, 0);
        free_arguements(command);
    }

    return(WEXITSTATUS(status));
}