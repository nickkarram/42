/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_cmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:28:52 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/13 23:38:10 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush_cmp(int x, int y, char *str, int i)
{
	int rush_arr[7] = {0, 0, 0, 0, 0, x, y}
	int n;

	n = 0;
	if (ft_strcmp(str, rush00(x, y, 1, 1)) == 0)
		rush_arr[0] = 1;
	if (ft_strcmp(str, rush01(x, y, 1, 1)) == 0)
		rush_arr[1] = 1;
	if (ft_strcmp(str, rush02(x, y, 1, 1)) == 0)
		rush_arr[2] = 1;
	if (ft_strcmp(str, rush03(x, y, 1, 1)) == 0)
		rush_arr[3] = 1;
	if (ft_strcmp(str, rush04(x, y, 1, 1)) == 0)
		rush_arr[4] = 1;
	while (i <= 5)
	{
		if (rush_arr[i] == 1)
			n = 1;
		i++;
	}
	if (n == 1)
	{
		ft_putstr("Not a Match.\n");
		return ;
	}
	rush_print(rush_arr);
}
