/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:38:09 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/07 11:38:24 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int k;
	int result;

	k = 1;
	result = tab[0];
	while (k < length)
	{
		if (tab[k] >= result)
		{
			result = tab[k];
			++k;
		}
		else
			++k;
	}
	if (tab[length] > result)
		return (tab[length]);
	else
		return (result);
}
