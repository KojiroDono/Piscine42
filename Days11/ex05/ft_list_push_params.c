/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 17:24:21 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/20 11:42:48 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*current;
	t_list	*nextor;
	int		i;

	if (ac <= 0)
		return (NULL);
	i = 0;
	nextor = NULL;
	while (i < ac)
	{
		current = ft_create_elem(av[i]);
		current->next = nextor;
		nextor = current;
		i++;
	}
	return (current);
}
