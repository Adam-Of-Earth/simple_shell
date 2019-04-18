#include "holberton.h"

/**
 * _strlen - finds len of string
 * @str: string to mesure
 *
 * Return: size of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
