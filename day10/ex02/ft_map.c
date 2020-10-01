/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:38:32 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/08 19:49:00 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int x;
	int *tab2;

	x = 0;
	tab2 = (int*)malloc(sizeof(int) * length);
	while (x < length)
	{
		tab2[x] = f(tab[x]);
		x++;
	}
	return (tab2);
}
