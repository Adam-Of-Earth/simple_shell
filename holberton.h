#ifndef HOLBERTO
#define HOLBERTO
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
#include <signal.h>
#include <errno.h>
extern char **environ;
char *combind(char *str1, char *str2);
void appender(char *str, char **tokens, char **args);
char **vector(char *str, ssize_t charCount, char *delim);
void free_array(char **array);
int _strlen(char *str);
int _strncmp(char *s1, char *s2, int n);
void control(int n);
char *pathfinder(char **env);
#endif
