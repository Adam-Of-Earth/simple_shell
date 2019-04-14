#include <string.h>
#include <stdio.h>

int main(void)
{
	char *newline, *line = "this is a line";
	int i;
	
	newline = strdup(line);
	printf("%s\n", line);
	printf("%s\n", newline);
}
