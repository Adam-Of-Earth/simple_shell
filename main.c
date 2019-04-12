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
	char **argsVector = 0;
	char *buffer;
	size_t buffSize = 0;
	ssize_t charCount;
	pid_t newProcess;
	int status;

	if (argc < 1)
		return (-1);
	while (1)
	{
		write(STDERR_FILENO, "$ ", 2);
		charCount = getline(&buffer, &buffSize, stdin); // check
		if (charCount < 0) // Parent process
			break;
		if ((buffer[charCount - 1]) == '\n')
			buffer[charCount - 1] = '\0';
		argsVector = malloc(sizeof(argsVector) + 1);
		*argsVector = *vector(buffer, charCount);
		newProcess = fork();
		if (newProcess < 0)
			perror(argv[0]);
		if (newProcess == 0) // Child Process
		{
			execve(buffer, argv, envp);
			perror(argv[0]);
		}
		else
			wait(&status);
	}
	if (charCount < 0)
		write(STDERR_FILENO, "\n", 1);
	free(buffer);
	free(argsVector);
	return (0);
}
