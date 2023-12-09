#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

/* Delimiters global var*/
#define DELIM " \t\n"
/* Global Declaration for environ*/
extern char **environ;


/*---  prompt ----*/
char *read_line(void);
char **tokenizer(char *line);
int _execute(char **command, char **argv);

/*--- Strings  --- */
char *_strcpy(char *dest, char *source);
char *_strcat(char *first, char *second);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strchr(char *str, char c);
char *_strdup(char *str);
int _putchar(char c);

/*--- Memory  ---*/
void free_arrguements(char **arrguments)

#endif
