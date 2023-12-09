#include "shell.h"
/**
 * free_arguments - Frees the memory allocated for an array of arguments
 *
 * @arguments: Array of arguments to be freed
 */
void free_arguements(char **arguments)
{
    int i;
	/* Check if the array is NULL to avoid dereferencing a NULL pointer */
	if (!arguments)
			return;
		/* Iterate through the array of arguments */
		for (i = 0; arguments[i]; i++)
		{
			/*  Free the memory allocated for each argument */
			free(arguments[i]);
			/* Set the pointer to NULL after freeing to avoid dangling pointers */
			arguments[i] = NULL;
		}
        
		/* Free the memory allocated for the array of arguments */
		free(arguments);
		/* Set the pointer to NULL after freeing to avoid dangling pointers*/
		arguments = NULL;
}