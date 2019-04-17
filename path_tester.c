#include "holberton.h"

/**
 * appender - combind path and command to see if its valid
 * @str: user imput
 * @tokens: path array
 * @args: argument array
 * Return: void
 */
void appender(char *str, char **tokens, char **args)
{
	int error_code, index = 0;
	char *fullcommand, **ce = environ;

	while (tokens[index] != NULL)
	{
		fullcommand = combind(tokens[index], str);
		if (access(fullcommand, F_OK) == 0)
		{
			execve(fullcommand, args, ce);
			error_code = errno;
		}
		index++;
	}
	errno = error_code;
	perror(str);
	exit(2);
}
