/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 19:34:23 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/06 00:47:39 by valimeroilou     ###   ########.fr       */
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

	resultat = 0;
	number_char = ft_countstr(str);

	if (number_char < 1 || !(ft_check_number(str))) /*Verif si la chaine entree est correcte*/
	{
		return(0);
	}

	int		i;
	int		buff_carotte;
	i = 0;

	while(str[i] != '\0')
	{
		buff_carotte = str[i];
		resultat = (buff_carotte - 48) * power(10, number_char - 1) + resultat;
		number_char--;
		i++;
	}

	return(resultat);
}

