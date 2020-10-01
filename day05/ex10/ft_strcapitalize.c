/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 21:48:53 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/01 23:38:21 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A') && (str[x] <= 'Z'))
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 1;
	ft_strlowcase(str);
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
	}
	while (str[x] != '\0')
	{
		if (((str[x] >= ' ') && (str[x] <= '/'))
			|| ((str[x] >= ':' && str[x] <= '@')))
		{
			if ((str[x + 1] >= 'a') && (str[x + 1] <= 'z'))
			{
				str[x + 1] = str[x + 1] - 32;
			}
		}
		x++;
	}
	return (str);
}
