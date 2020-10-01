/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:12:07 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/06 19:51:51 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);

int		main(void)
{
	printf("%d\n", match("abbbfg", "*g"));
	printf("%d\n", match("gcdd", "g*d"));
	printf("%d\n", match("23m4f", "34213*"));
	printf("%d\n", match("blabber", "*abb*"));
	printf("%d\n", match("gooaf", "g****f"));
	printf("%d\n", match("booof", "***o*"));
}
