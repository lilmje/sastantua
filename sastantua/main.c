#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int		main(int ar, char **av)
{
	int i = ar;
	char *str = av[i];
	if(av[i] < 0)
		printf("ERREUR");
	else
		ft_triangle(av[i]);
	return(0);
}

