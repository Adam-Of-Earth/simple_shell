#include "holberton.h"

/**
  * vector - Tokenizes input string "str" and returns tokens in an array.
  * @str: String being tokenized and packaged.
  * @charCount: Length of string.
  * Return: Vector array with tokenized string.
  */

char **vector(char *str, ssize_t charCount)
{
	char **args;
	char *buffer, *token, *buffPtr, *delim = " :";
	int index = 0, tok = 1;

	buffer = malloc(charCount + 1);
	if (buffer == NULL)
		return (NULL);
	strncpy(buffer, str, charCount + 1); //For STRNCPY function.
	buffPtr = buffer;
	while (*buffPtr)
	{
		if (*buffPtr == ' ')
			tok++;
		buffPtr++;
	}
	args = malloc(sizeof(char *) * (tok + 1)); // check line
	if (args == NULL)
		return (NULL);
	token = strtok(buffer, delim); //For STRTOK.check line
	while (token)
	{
		args[index] = malloc(strlen(token) + 1); //STRLEN func
		if (args[index] == NULL)
			return (NULL);
		strncpy(args[index], token, strlen((token) + 1));//STRLEN/STRNCPY
		token = strtok(NULL, delim); //STRTOK
		index++;
	}
	args[index] = NULL;
	free(buffer);
	return (args);
}
