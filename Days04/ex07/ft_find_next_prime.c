/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:48:01 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/31 15:53:23 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			i = 2;
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
	return (nb);
}
