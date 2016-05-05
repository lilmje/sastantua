#include "include.h"
#include <stdio.h>
int		main(void)
{
	char *str;
	str = "12321312390";
	int i;
	i = ft_check_number(str);

	printf("%i\n", i);
	return (0);
}