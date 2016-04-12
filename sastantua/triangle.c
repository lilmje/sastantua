#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_triangle(char *str)
{
	int i = 0;
	while(i == str[i])
	{
		write(1, "*", 1);
		i++;
	}
	return(str[i]);
}


