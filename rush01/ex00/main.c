/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 11:39:25 by labbott           #+#    #+#             */
/*   Updated: 2016/11/06 23:28:29 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		is_valid_solution(int *digits)
{
	int i;
	int count;
	int out;

	i = 0;
	out = -1;
	count = 0;
	while (i < SIZE)
	{
		if (digits[i] != 0)
		{
			count++;
			out = i + 1;
		}
		i++;
	}
	if (count == 1)
		return (out);
	return (0);
}

int		solve(char *board, int cur)
{
	int i;
	int cur_x;
	int cur_y;
	int *valid;

	valid = (int *)malloc(sizeof(int) * SIZE);
	cur_x = cur % SIZE;
	cur_y = cur / SIZE;
	i = 0;
	while (i < SIZE)
		valid[i++] = 1;
	i = 0;
	while (++i < SIZE)
	{
		if (get(board, (cur_x + i) % SIZE, cur_y) != EMPTY)
			valid[get(board, (cur_x + i) % SIZE, cur_y) - '0' - 1] = 0;
		if (get(board, cur_x, (cur_y + i) % SIZE) != EMPTY)
			valid[get(board, cur_x, (cur_y + i) % SIZE) - '0' - 1] = 0;
		if (get(board, ((cur_x / 3) * 3) + ((i - 1) / 3),
					((cur_y / 3) * 3) + ((i - 1) % 3)) != EMPTY)
			valid[get(board, ((cur_x / 3) * 3) + ((i - 1) / 3),
					((cur_y / 3) * 3) + ((i - 1) % 3)) - '0' - 1] = 0;
	}
	return (is_valid_solution(valid));
}

int		check_error(int argc, char **argv)
{
	int		i;
	int		j;
	char	*line;

	if (argc != SIZE + 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (++i < SIZE + 1)
	{
		line = argv[i];
		j = 0;
		while (j < SIZE)
		{
			if (!((line[j] >= '1' && line[j] <= '9') || line[j] == '.'))
			{
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
	}
	return (0);
}

int		check_solved(char *board)
{
	if (ft_next_empty(board, 0) != SIZE * SIZE)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	char	*board;
	int		cur;
	int		i;
	int		answer;
	int		progress;

	if (check_error(argc, argv))
		return (0);
	board = ft_get_sudoku(argv);
	progress = 1;
	while ((cur = ft_next_empty(board, 0)) != SIZE * SIZE && progress)
	{
		i = -1;
		progress = 0;
		while (++i < SIZE * SIZE)
			if (board[i] == EMPTY)
				if ((answer = solve(board, i)) != 0
						&& (progress = 1))
					board[i] = '0' + answer;
	}
	if (check_solved(board))
		return (1);
	ft_draw_sudoku(board);
}
