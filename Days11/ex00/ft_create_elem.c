/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:19:02 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/20 11:34:11 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	if (!(elem = (t_list*)malloc(sizeof(t_list))))
		return (0);
	elem->next = NULL;
	elem->data = data;
	return (elem);
}
