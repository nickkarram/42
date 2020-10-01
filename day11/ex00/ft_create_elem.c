/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarram <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:11:25 by nkarram           #+#    #+#             */
/*   Updated: 2016/11/09 22:31:54 by nkarram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *dest;

	dest = malloc(sizeof(t_list));
	if (dest)
	{
		dest->data = data;
		dest->next = NULL;
	}
	return (dest);
}
