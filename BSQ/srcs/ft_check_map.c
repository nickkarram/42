/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:04:51 by vmakarov          #+#    #+#             */
/*   Updated: 2016/11/15 21:57:29 by vmakarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_map(char *str)
{
	int 	i;
	int 	row_given;
	int 	col;
	int 	row;
	int 	temp;
	char	empty;
	char	obstacle;
	char	full;

	row_given = ft_atoi_modified(str);// identifies number of rows given by prog
	i = ft_check_n_col_first_row(str) + 1;// identifies the index of the beg of map
	full = str(ft_check_n_col_first_row(str) - 1);
	obstacle = str(ft_check_n_col_first_row(str) - 2);
	empty = str(ft_check_n_col_first_row(str) - 3);
	col = ft_count_cols(str, i);
	row = ft_count_rows(str);
	while (str[i])
	{
		if ((str[i] != "o") && (str[i] != ".") && ())
			return (-1);
		i++;
	}
	i = ft_check_n_col_first_row(str) + 1;
	while (str[i])
	{
		temp = 0;
		while (str[i] != '\n')
		{
			i++;
			temp++;
		}
		if (temp != col)
			return (-1);
		i++;
	}
}

int	ft_check_n_col_first_row(*str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i + 1);
}
