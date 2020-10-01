/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 03:27:08 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/13 23:16:30 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

# define BUFF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
char	*ft_read(int fd);
int		x_dim(char *c);
int		y_dim(char *c);
int		ft_strcmp(char *s1, char *s2);
char	printing00(int a, int b, int c, int d);
char	*rush00(int x, int y, int i, int j);
char	printing01(int a, int b, int c, int d);
char	*rush01(int x, int y, int i, int j);
char	printing02(int a, int b, int c, int d);
char	*rush02(int x, int y, int i, int j);
char	printing03(int a, int b, int c, int d);
char	*rush03(int x, int y, int i, int j);
char	printing04(int a, int b, int c, int d);
char	*rush04(int x, int y, int i, int j);
void	rush_print(int *rush_arr);
void	rush_cmp(int x, int y, char *str, int i, int n);
int		main();
#endif
