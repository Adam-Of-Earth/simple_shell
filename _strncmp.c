#include "holberton.h"

/**
 * _strncmp - compares two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes to check
 *
 * Return: 1 (sucsses) 0 (failure)
 */
int _strncmp(char *s1, char *s2, int n)
{
	char *s1p, *s2p;
	int index = 1;

	s1p = s1;
	s2p = s2;
	while (*s1p != '\0' && index < n)
	{
		if (*s1p == *s2p)
		{
			index++;
			s2p++;
		}
		s1p++;
	}
	if (*s1p == *s2p)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
