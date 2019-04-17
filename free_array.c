#include "holberton.h"

/**
 * free_array - cleans an array of pointers
 * @array: array of pointers to free
 *
 * Return: void
 */
void free_array(char **array)
{
	int index = 0;

	if (array == NULL)
		return;
	while (array[index] != NULL)
	{
		free(array[index]);
		index++;
	}
	free(array);
}
