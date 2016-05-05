/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 23:10:59 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 23:20:52 by valimeroilou     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include.h"

void		sas_printline(int o)
{
	int i;
	i = 0;

	ft_putchar('/');
	while(i < o)
	{
		ft_putchar('*');
		i++;
	}
	ft_putstr("\\\n");
}