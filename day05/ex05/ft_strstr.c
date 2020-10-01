/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 22:18:52 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/01 22:18:56 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;
	int t;

	x = 0;
	y = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		t = x;
		y = 0;
		while (to_find[y] == str[t])
		{
			t++;
			y++;
			if (to_find[y] == '\0')
				return (&str[x]);
		}
		x++;
	}
	return ("(null)");
}
