/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarandi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:44:30 by asarandi          #+#    #+#             */
/*   Updated: 2016/10/29 18:12:53 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush_line(int x, char l, char r, char b)
{
	int	tmp;

	tmp = x - 2;
	ft_putchar(l);
	if (x > 2)
		while (tmp-- > 0)
			ft_putchar(b);
	if (x >= 2)
		ft_putchar(r);
	ft_putchar('\n');
	return ;
}

void	rush(int x, int y)
{
	int v_stars;

	if (x < 1 || y < 1)
		return ;
	v_stars = y - 2;
	rush_line(x, '/', '\\', '*');
	if (y > 2)
		while (v_stars-- > 0)
			rush_line(x, '*', '*', ' ');
	if (y >= 2)
		rush_line(x, '\\', '/', '*');
	return ;
}
