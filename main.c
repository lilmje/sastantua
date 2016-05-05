#include "include.h"
#include <stdio.h>
int		main(int argc, char **argv)
{
	int r;
	argc = 3;
	r = ft_atoi(argv[1]);

	printf("%i\n", r);
	return (0);
}
