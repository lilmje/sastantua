/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 19:43:27 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 22:50:10 by valimeroilou     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INCLUDE_H
# define FT_INCLUDE_H

# include <unistd.h>
int			ft_atoi(char *str);			/*converti une variable de type char en int*/
void		ft_putchar(char c);			/*ecris un charactere sur la sortie standard*/
void		ft_putstr(char *str);		/*ecris une chaine de caractere sur la sortie standard*/
int			ft_countstr(char *str); 	/*Compte le nombre de caractere dans une chaine*/
int			ft_check_number(char *str);	/*Verifie si il n'y a que des chiffres*/
int			power(int nbr, int power);	/*math.c permet de faire une puissance*/
#endif
