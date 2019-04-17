#include "holberton.h"

/**
 * tester - combind path and command to see if its valid
 * @str: user imput
 *
 *
 *
 */
int appender(char *str, char **tokens)
{
	int error_code, index = 0;
	char *fullcommand, **ce = environ;

	while (tokens[index] != NULL)
	{
		fullcommand = combind(tokens[index], str);
		if(access(fullcommand, F_OK))
		{
			execve(fullcommand, tokens, ce);
			error_code = errno;
		}
	}
	errno = error_code;
}
