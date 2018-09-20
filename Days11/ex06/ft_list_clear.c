/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:25:56 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/20 11:59:14 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*current;
	t_list	*nextor;

	current = *begin_list;
	while (current != NULL)
	{
		nextor = current->next;
		free(current);
		current = nextor;
	}
	*begin_list = NULL;
}
