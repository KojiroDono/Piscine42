/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 09:45:04 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/19 22:15:49 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *t;

	t = NULL;
	i = 0;
	if (!(t = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}
