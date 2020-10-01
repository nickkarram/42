/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:37:05 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/03 18:47:54 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src);

int		main(void)
{
	char src[11] = "what it do";

	printf("%s\n", ft_strdup(src));
	return (0);
}
