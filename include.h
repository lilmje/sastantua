/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 19:43:27 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 23:22:48 by valimeroilou     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INCLUDE_H
# define FT_INCLUDE_H

# include <unistd.h>
void		ft_putchar(char c);			/*ecris un charactere sur la sortie standard*/
void		ft_putstr(char *str);		/*ecris une chaine de caractere sur la sortie standard*/
int			ft_countstr(char *str); 	/*Compte le nombre de caractere dans une chaine*/

/*ft_atoi.c*/
int			ft_check_number(char *str);	/*Verifie si il n'y a que des chiffres*/
int			power(int nbr, int power);	/*math.c permet de faire une puissance*/

/*sastantua.c*/
int			ft_atoi(char *str);			/*converti une variable de type char en int*/
void		sas_printline(int o);
#endif
