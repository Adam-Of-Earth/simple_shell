#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int index = 0;

	for ( ; av[index] != '\0'; index++)
		printf("%s\n", av[index]);
	return (0);
}
