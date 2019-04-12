#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */
char *_strtok(char *str, char *delim)
{
	static char *strpoint;
	char *s, *delimpoint = delim;
	int i;

	if(str != NULL)
	{
		strpoint = str;
	}
	for (i = 1; *strpoint != '\0'; i++)
	{
		if(*strpoint == *delimpoint)
		{
			*strpoint == '\0';
			s = malloc(sizeof(char) * i);
			while (str != '\0')
			{
				*s = *str;
				s++;
				str++;
			}
			*s = '\0';
			return(s);
		}
		delimpoint++;
		if(delimpoint == '\0')
		{
			strpoint++;
			delimpoint = delim;
		}
	}
	while(*strpoint == '\0')
	{
