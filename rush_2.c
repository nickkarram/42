/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:28:09 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/13 23:28:10 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char		*ft_read(int fd)
{
	int		ret;
	char	*buf;

	buf = malloc(sizeof(char) * (BUFF_SIZE + 1));
	ret = read(fd, buf, BUFF_SIZE);
	buf[ret] = '\0';
	return (buf);
}
