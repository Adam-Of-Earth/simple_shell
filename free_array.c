#include "holberton.h"

/**
 * _arrayfree - cleans an array of pointers 
 *
 *
 *
 *
 */
void _arrayfree(char **array)
{
	while (**array)
	{
		free(*array);
		*array++;
	}
	free(array);
}
