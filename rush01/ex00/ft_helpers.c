/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 11:43:04 by labbott           #+#    #+#             */
/*   Updated: 2016/11/06 15:39:06 by labbott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		get(char *board, int x, int y)
{
	return (board[x + y * SIZE]);
}

int		ft_next_empty(char *board, int index)
{
	while (board[index] != EMPTY && index < SIZE * SIZE)
		index++;
	return (index);
}

void	ft_draw_sudoku(char *board)
{
	int		i;
	int		j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE - 1)
		{
			ft_putchar(get(board, j, i));
			ft_putchar(' ');
		}
		ft_putchar(get(board, j, i));
		ft_putchar('\n');
	}
}

char	*ft_get_sudoku(char **argv)
{
	char	*board;
	int		x;
	int		y;

	y = 0;
	board = (char *)malloc(sizeof(char) * (SIZE * SIZE));
	while (y < SIZE)
	{
		x = 0;
		while (x < SIZE)
		{
			board[y * SIZE + x] = argv[y + 1][x];
			x++;
		}
		y++;
	}
	return (board);
}
