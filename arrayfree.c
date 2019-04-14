void arrayfree(char **array)
{
	int index = 0;

	while ((**array) && index != '\0')
	{
		free(array[index]);
		index++;
	}
	free(array);
}
