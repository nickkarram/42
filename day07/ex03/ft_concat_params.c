/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:43:25 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/03 22:57:14 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\n';
	dest[x + y + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		x;
	int		y;
	int		t;
	char	*str;

	t = 1;
	x = 0;
	y = 0;
	while (t < argc)
	{
		y = 0;
		while (argv[t][y++])
			x++;
		t++;
	}
	str = (char*)malloc(sizeof(*str) * (t + x));
	y = 0;
	while (y < argc - 1)
	{
		str = ft_strcat(str, argv[y + 1]);
		y++;
	}
	str[t + x - 2] = 0;
	return (str);
}
