#include "holberton.h"

/**
 * pathfinder - finds the path in the environment
 * @env: the environment
 *
 * Return: string contaning the PATH
 */
char *pathfinder(char **env)
{
	char *path = "PATH=";
	int index;

	for (index = 0; env[index]; index++)
	{
		if (_strncmp(env[index], path, 5) == 1)
			return ((env[index]) += 5);
	}
	return (NULL);
}
