/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:00:04 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/03 17:35:58 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int x;
	int min = 2;
	int max = 8;
	int **range = 0;

	x = ft_ultimate_range(range, min, max);
	printf("%d\n", x);
}
