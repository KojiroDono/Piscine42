/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:30:28 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/06 14:19:57 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int a;
	int temp;

	a = 0;
	while (a < size - 1)
	{
		if (tab[a] <= tab[a + 1])
			a++;
		else
		{
			temp = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = temp;
			a = 0;
		}
	}
}
