/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:33:31 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 17:11:37 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/colle.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list*)malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current;

	current = *begin_list;
	while (current->next != NULL)
		current = current->next;
	current->next = ft_create_elem(data);
}

void	print_list(t_list **begin_list)
{
	t_list	*current;

	current = *begin_list;
	while (current != NULL)
	{
		ft_putstr(current->data);
		current = current->next;
	}
}


int		main(void)
{
	t_list	*e;
	char	*s;
	char	buf;

	e = ft_create_elem("Hello");
	while (read(0, &buf, 1))
	{
		printf("%s", &buf);
		s = ft_strdup(&buf);
		printf("%s", s);
//		ft_list_push_back(&e, s);
	}
//	ft_list_push_back(&e, " ");
//	ft_list_push_back(&e, "World !");
	print_list(&e);
	return (0);
}
