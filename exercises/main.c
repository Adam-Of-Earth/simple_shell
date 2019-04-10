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
	char *buffer, *buffer2;
	size_t buffSize = 0;
	ssize_t charCount;
	pid_t newProcess;
	int status; int ind = 0;
	char *delimiter = " ";

	if (argc < 1)
		return (-1);
	while (1)
	{
		buffer = argv[];
		write(STDERR_FILENO, "$ ", 2);
		charCount = getline(&buffer, &buffSize, stdin);
		if (charCount < 0) // Parent process
			break;
		newProcess = fork();
		if (newProcess < 0)
			perror(argv[0]);
		if (newProcess == 0) // Child Process
		{
			buffer2[0] = strtok(buffer, delimiter);
			while (buffer2[ind] != '\0')
			{
				buffer2[ind] = strtok('\0', delimiter);
				printf("%s", buffer2);
				ind++;
			}
			execve(buffer, argv, envp);
			perror(argv[0]);
		}
		else
			wait(&status);
	}
	if (charCount < 0)
		write(STDERR_FILENO, "\n", 1);
	free(buffer);
	return (0);
}
