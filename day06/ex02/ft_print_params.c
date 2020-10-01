/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:43:05 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/02 21:43:46 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*t;

	x = 1;
	y = 0;
	if (argc)
	{
		while (x < argc)
		{
			t = argv[x];
			while (t[y])
			{
				ft_putchar(t[y]);
				y++;
			}
			x++;
			y = 0;
			ft_putchar('\n');
		}
	}
	return (0);
}
