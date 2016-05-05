/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 22:25:19 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 22:31:46 by valimeroilou     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include.h"

int		power(int nbr, int power)
{
	int		resultat;
	int		i;
	i = 0;

	resultat = 1;
	if(power == 0)
	{
		return (1);
	}

	while(i < power)
	{
		resultat = resultat * nbr;
		i++;
	}
	return(resultat);
}