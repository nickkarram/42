/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:36:14 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/09 23:08:26 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *dest;

	dest = begin_list;
	if (dest)
	{
		while (dest->next)
		{
			dest = dest->next;
		}
		return (dest);
	}
	return (0);
}
