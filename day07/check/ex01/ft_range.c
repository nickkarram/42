/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:29:44 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/03 16:04:50 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*ints;
	unsigned int	x;

	if (min >= max)
	{
		return (0);
	}
	ints = (int*)malloc(sizeof(*ints) * (max - min + 1));
	x = 0;
	while (min < max)
	{
		ints[x] = min;
		x++;
		min++;
	}
	return (ints);
}
