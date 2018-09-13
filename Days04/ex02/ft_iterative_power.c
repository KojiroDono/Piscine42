/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:55:48 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/31 15:38:37 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int c;
	int r;

	c = 1;
	r = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (c < power)
	{
		r *= nb;
		c++;
	}
	return (r);
}
