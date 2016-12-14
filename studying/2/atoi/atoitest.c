#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s", "WRONG");
	}
	else
		printf("%d", atoi(argv[1]));
	return (0);
}
