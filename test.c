#include "head.h"


int main(void)
{
	char *line = "this line is long";
	char *line2 = "thin line is long";
	int i;

	i = _strcmp(line, line2, 5);
	printf("%i\n", i);
	return (0);
}
