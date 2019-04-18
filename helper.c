#include "holberton.h"

/**
 * combind - concats two strings and adds a /
 * @str1: path
 * @str2: command
 * Return: new string
 */
char *combind(char *str1, char *str2)
{
	char *full, *strmover = str1;
	int a = _strlen(str1), b = _strlen(str2), index = 0, index2 = 0;

	while (*strmover != '\0')
		strmover++;
	full = malloc(sizeof(char) * (a + b + 2));
	for (; str1[index] != '\0'; index++)
		full[index] = str1[index];
	if (full[index - 1] != '/')
		full[index++] = '/';
	index2 = index;
	for (index = 0; str2[index] != '\0'; index++, index2++)
	{
		full[index2] = str2[index];
	}
	full[index2] = '\0';
	return (full);
}
/**
 * _strncpy - copies a string
 * @src: string to copy
 * @dest: string coped over
 * @n: length of src to copy
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
