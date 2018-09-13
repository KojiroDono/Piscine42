/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 16:29:58 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/12 18:16:26 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
		return (0);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
