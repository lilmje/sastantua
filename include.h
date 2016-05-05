/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valimeroilou <valimeroilou@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 19:43:27 by valimeroilou      #+#    #+#             */
/*   Updated: 2016/05/05 22:41:29 by valimeroilou     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INCLUDE_H
# define FT_INCLUDE_H

# include <unistd.h>
int			ft_atoi(char *str);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_countstr(char *str);
int			ft_check_number(char *str); /*Verifie si il n'y a que des chiffres*/
int			power(int nbr, int power);
#endif
