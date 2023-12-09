#include "shell.h"
/*
*
*
*
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
            free_arrguements(command);
        }
    }
    else
    {
        waitpid(child_process, &status, 0);
        free_arrguements(command);
    }

    return(WEXITSTATUS(status));


}