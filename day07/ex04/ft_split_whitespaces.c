/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:59:20 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/03 23:31:55 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_charcount(char *str)
{
	int x;
	int l;
	int t;
	char **split;
	char **temp;
	
	t = 0;
	l = 0;
	while (l < t)
	{
		x = 0;
		while ((str[x] != 32 || str[x] != 9 || str[x] != '\n') && str[x] != '\0')
		{
			temp[x] = str[x];
			x++;
		}
		split[l] = temp;
		l++;
	}
	return (split);
}

char	**ft_split_whitespace(char *str)
{
	int		x;
	int		l;
	int		t;
	char	**split;
	char	**temp;

	x = 0;
	l = 0;
	t = 0;
	while (str)
	{
		if (str[l] != 32 || str[l] != 9 || str[l] != '\n')
			t++;
		l++;
	}
	*split = (char*)malloc(sizeof(char) * (l + 1));
	l = 0;
	ft_charcount(*str);
}

int		main(int argc, char **argv)
{
	ft_split_whitespace(argc, argv);
	return (0);
}
