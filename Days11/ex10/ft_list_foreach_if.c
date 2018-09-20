/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:29:28 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/20 09:06:19 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)(void *, void *))
{
	t_list *current;

	current = begin_list;
	while (current != NULL)
	{
		if (cmp(current->data, data_ref) == 0)
			f(current->data);
		current = current->next;
	}
}
