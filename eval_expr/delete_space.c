/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_space.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arfohrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:42:33 by arfohrer          #+#    #+#             */
/*   Updated: 2018/02/24 15:59:07 by arfohrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

char	*delete_spaces(char *str)
{
	int		i;
	int		j;
	char	*back;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			size++;
		i++;
	}
	back = (char *)malloc(sizeof(char) * size);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			back[j++] = str[i];
		i++;
	}
	back[j] = '\0';
	return (back);
}
