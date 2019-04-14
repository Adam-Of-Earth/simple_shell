#include "holberton.h"

/**
 * _strlen - finds len of string
 * @str: string to mesure
 *
 * Return: size of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str)
	{
		len++;
		str++;
	}
}
