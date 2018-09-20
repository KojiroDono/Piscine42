/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:26:41 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/20 09:04:16 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*current;
	unsigned int	i;

	current = begin_list;
	i = 0;
	while (i < nbr && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL && i < nbr)
		return (NULL);
	return (current);
}
