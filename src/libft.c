#include "../include.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_countstr(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}