/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:12:07 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/06 20:00:45 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2);

int		main(void)
{
	printf("%d\n", nmatch("abbbfg", "*g"));
	printf("%d\n", nmatch("gcdd", "g*d"));
	printf("%d\n", nmatch("23m4f", "34213*"));
	printf("%d\n", nmatch("blabber", "*abb*"));
	printf("%d\n", nmatch("gooaf", "g****f"));
	printf("%d\n", nmatch("booof", "***o*"));
}
