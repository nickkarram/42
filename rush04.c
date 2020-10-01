/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:27:59 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/13 23:28:00 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	printing04(int a, int b, int c, int d)
{
	if ((c == 1 && d == 1) || (c == a && d == b && c > 1 && d > 1))
		return ('A');
	else if ((c == 1 && d == b) || (c == a && d == 1))
		return ('C');
	else if (c == 1 || c == a || d == 1 || d == b)
		return ('B');
	else
		return (' ');
}

char	*rush04(int x, int y, int i, int j)
{
	int		k;
	char	*str;

	k = 0;
	str = malloc(sizeof(char) * ((x * y) + y + 1));
	if (x < 0)
		return (0);
	if (y < 0)
		return (0);
	while (j <= y)
	{
		while (i <= x)
		{
			str[k] = printing04(x, y, i, j);
			i++;
			k++;
		}
		str[k] = '\n';
		j++;
		k++;
		i = 1;
	}
	str[k] = '\0';
	return (str);
}
