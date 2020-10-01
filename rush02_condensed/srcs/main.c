/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:26:56 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/13 23:26:58 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	char	*str;
	int		x;
	int		y;

	str = ft_read(0);
	if (*str == '\0' || *str == '\n')
	{
		ft_putstr("Not Valid\n");
		return (0);
	}
	x = x_dim(str);
	y = y_dim(str);
	if (x <= 0 || y <= 0)
		return (0);
	rush_cmp(x, y, str, 0, 0);
	return (0);
}
