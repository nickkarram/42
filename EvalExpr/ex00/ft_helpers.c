/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:23:25 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/13 22:33:55 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		ft_atoi(const char *str)
{
	int index;
	int number;
	int negative;

	index = 0;
	number = 0;
	negative = 0;
	while (str[index] == ' ' || str[index] == '+' || str[index] == '0' || str[index] == '\n' || str[index] == '\f' || str[index] == '\r' || str[index] == '\v')
		index++;
	if (str[index] == '-')
	{
		negative = 1;
		index++;
	}
	while (str[index] > '9')
		return (0);
	while (str[index] <= '9' && str[index] >= '0' && str[index] != '\0')
	{
		number *= 10;
		number += str[index] - '0';
		index++;
	}
	if (negative == 1)
		return (-number);
	return (number);
}
