/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 19:34:23 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 22:51:40 by valimeroilou     ###   ########.fr       */
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
	int		resultat;
	int		number_char;

	number_char = ft_countstr(str);

	if (number_char < 1 || !(ft_check_number(str))) /*Verif si la chaine entree est correcte*/
	{
		return(0);
	}

	int		i;
	int		buff;
	i = 0;

	while(str[i] != '\0')
	{
		buff = str[i];
		resultat = (buff - 48) * power(10, number_char - 1) + resultat;
		number_char--;
		i++;
	}

	return(resultat);
}



















