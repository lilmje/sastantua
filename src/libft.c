/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 19:45:17 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 19:47:48 by valimeroilou     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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