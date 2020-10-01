/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:20:53 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/03 01:36:31 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		x;
	char	*t;

	x = 0;
	t = argv[0];
	if (argc)
	{
		while (t[x] != '\0')
		{
			ft_putchar(t[x]);
			x++;
		}
	}
	ft_putchar('\n');
	return (0);
}
