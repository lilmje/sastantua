/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 19:34:23 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 21:54:43 by valimeroilou     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include.h"

int		ft_check_number(char *str) /*Verifie si il n'y a que des chiffres*/
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}



int		ft_atoi(char *str)
{
	int number_char;
	number_char = ft_countstr(str);

	if (number_char < 1 || !(ft_check_number(str))) /*Verif si la chaine entree est correcte*/
	{
		return(0);
	}





	return(1); /*DEV*/
}