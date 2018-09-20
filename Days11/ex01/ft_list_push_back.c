/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:20:24 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/20 09:48:03 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	current = *begin_list;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
