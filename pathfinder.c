#include "holberton.h"
/**
  *
  *
  *
  */

char *pathfinder(extern char **environ, char *uinput)
{
	char **envArray;
	char *inputBuffer, char *outputBuffer;
	size_t index = 0;

	while (*environ != NULL)
	{
		*envArray = malloc(sizeof(environ[index]) + 1);
		while (index != '\0')
		{
			*envArray[index] = *environ[index];
			index++;
		}
		*inputBuffer = malloc(sizeof(*uinput) + 1);
		*inputBuffer = *uinput;
		while (envArray[index] == "PATH")
		{
			*outputBuffer = vector(inputBuffer, delimiter); // check for syntax

