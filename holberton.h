#ifndef HOLBERTO
#define HOLBERTO
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>
char **vector(char *str, ssize_t charCount);
void free_array(char **array);
#endif
