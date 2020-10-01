/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:47:41 by nkarram           #+#    #+#             */
/*   Updated: 2016/10/30 19:29:39 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		line(char a, char b, char c, char d, char e)
{
	int a_space = 0;
	int b_space = 0;

	while (a_space++ < a)
	{
		ft_putchar(' ');
	}
	return ft_putchar(d);
	while (b_space++ < c)
	{
		ft_putchar(b);
	}
	ft_putchar(e);
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int arr[2];
	int level;
	int last;

	arr[0] = 1;
	level = 0;
	last = 1;
	while (arr[0] <= size)
	{
		arr[1] = 1;
		while (arr[1] <= arr[0] + 2)
		{
			line('/', '*', '\\', last + level, last * arr[1]);
			last += 2;
			arr[1]++;
		}
		level += 4;
		if (arr[0] % 2 != 0)
		{
			level += 2;
		}
		arr[0]++;
	}
}
