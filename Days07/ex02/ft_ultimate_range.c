/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 17:05:41 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/12 23:00:18 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	*range = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
		return (0);
	while (min < max)
		tab[i++] = min++;
	*range = tab;
	return (i);
}
