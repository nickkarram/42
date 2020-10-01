/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 22:12:22 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/10 23:18:15 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char	buf;
	int		fd;

	if (argc != 2)
	{
		if (argc < 2)
		{
			write(2, "File name missing.\n", 19);
			return (0);
		}
		if (argc > 2)
		{
			write(2, "Too many arguments.\n", 20);
			return (0);
		}
	}
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &buf, BUF_SIZE != 0))
	{
		ft_putchar(buf);
	}
	close(fd);
	return (0);
}
