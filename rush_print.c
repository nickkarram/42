/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:28:20 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/13 23:28:24 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush_print(int *rush_arr)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (i < 5)
	{
		if (rush_arr[i] == 1)
		{
			if (n == 1)
			{
				ft_putstr(" || ");
			}
			ft_putstr("[rush-0");
			ft_putnbr(i);
			ft_putstr("] [");
			ft_putnbr(rush_arr[5]);
			ft_putstr("] [");
			ft_putnbr(rush_arr[6]);
			ft_putstr("]");
			n = 1;
		}
		i++;
	}
	ft_putchar('\n');
}
