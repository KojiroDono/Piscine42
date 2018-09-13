/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:33:42 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/07 16:34:09 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int index;
	int size;

	index = 0;
	size = length;
	while (index < length)
	{
		if (!tab[index])
			size--;
	}
	return (size);
}
