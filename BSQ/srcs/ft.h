/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmakarov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:04:08 by vmakarov          #+#    #+#             */
/*   Updated: 2016/11/16 02:55:54 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/stat.h>
# define BUF_SIZE 1

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putchar_error(char c);
void	ft_putstr_error(char *str);
int		ft_check_map(char *str);
int		ft_count_rows(char *str);
int		ft_count_cols(char *str, int i);
int		ft_atoi_modified(char *str);
char	*ft_read(int argc, char **argv);
char	*ft_strcpy(char *src, char *dest);
int		ft_strlen(char *str);
char	*ft_strcat(char *s1, char *s2);
/*int		check_argc(int argc);*/

#endif
