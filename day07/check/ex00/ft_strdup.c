/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:14:05 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/03 15:13:41 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(char *src)
{
	int		x;
	int		y;
	char	*dest;

	if (!src)
	{
		return (0);
	}
	x = ft_strlen(src);
	dest = (char*)malloc(sizeof(*src) * x);
	if (!dest)
	{
		return (0);
	}
	y = 0;
	while (y < x)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
