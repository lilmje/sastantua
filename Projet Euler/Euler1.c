/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Euler1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <jmendy@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 01:52:54 by jmendy            #+#    #+#             */
/*   Updated: 2016/06/08 23:52:33 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int i=0;
	int n = 0;
	int somme;

	if(i < 1000)
	{
		while((i % 3) == 0 && (i % 5) == 0)
		{
			i++;
			somme = somme + i;
		}
		printf("%d", somme);
	}
}
