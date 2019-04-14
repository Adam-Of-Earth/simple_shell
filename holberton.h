#ifndef HOLBERTO
#define HOLBERTO
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
extern char **environ;
char **vector(char *str, ssize_t charCount);
#endif  
