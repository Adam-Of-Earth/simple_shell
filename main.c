#include "holberton.h"
/**
 * main - Function to act as a simple shell
 * @argc: Count of arguments passed to main
 * @argv: vector of arguments passed to main
 * @envp: environmental path passed to main.
 * Return: -1 on failure, 0 upon success.
 */

int main(int argc, char *argv[], char *envp[])
{
	char **argsVector = 0, **envVector = 0;
	char *buffer = NULL, *path, *delim = " \t\n", *pathDelim = ":";
	char interactive = 0;
	size_t buffSize = 0;
	ssize_t charCount;
	pid_t newProcess;
	int status;

	if (argc < 1)
		return (-1);
	signal(SIGINT, control);
	if (isatty(STDIN_FILENO) && isatty(STDOUT_FILENO))
		interactive = 1;
	while (1)
	{
		if (interactive)
			write(STDERR_FILENO, "[$] ", 4);
		charCount = getline(&buffer, &buffSize, stdin);
		if (charCount < 0)
			break;
		if (buffer[0] != '/')
		{
			path = pathfinder(envp);
		}
		envVector = vector(path, _strlen(path), pathDelim);
		argsVector = vector(buffer, charCount, delim);
		newProcess = fork();
		if (newProcess > 0)/* Parint process*/
			wait(&status);
		else if (newProcess == 0) /* Child Process*/
		{
			appender(argsVector[0], envVector, argsVector);
		}
		else
			perror(argv[0]);
	}
	if (charCount < 0 && interactive)
		write(STDERR_FILENO, "\n", 1);
	free(buffer);
	free_array(argsVector);
	return (0);
}
