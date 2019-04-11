#include <stdio.h>

/**
 * _strncpy - copys n bytes of a string
 * @oldString: string to copy from
 * @n: amount of bytes
 * @newString: string copying too
 *
 * Return: pointer to newString
 */
char * _strncpy(char *newString, char * oldString, int n)
{
	int i = 0;

	while (i < n && oldString[i])
	{
		newString[i] = oldString[i];
		i++;
	}
	while (i < n)
	{
		newString[i] = '\0';
		i++;
	}
	return (newString);
}
