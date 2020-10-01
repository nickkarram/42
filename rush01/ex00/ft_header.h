/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labbott <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:15:21 by labbott           #+#    #+#             */
/*   Updated: 2016/11/06 15:33:27 by labbott          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		get(char *s, int x, int y);
int		ft_next_empty(char *board, int index);
void	ft_draw_sudoku(char *tab);
char	*ft_get_sudoku(char **argv);
# define SIZE 9
# define EMPTY '.'
#endif
