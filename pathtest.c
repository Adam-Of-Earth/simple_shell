#include "holberton.h"

char **pathHolder(extern char **env)
{
	char **pathBuffer;
	size_t index = 0;

	**pathBuffer = malloc(sizeof(char **) + 1);
	while (env[index] != NULL)
	{
		*pathBuffer[index] = env[index];
		*pathHolder[index] = *pathBuffer[index];
		index++;
	}
	free(*pathBuffer);
	return (pathHolder);
}

