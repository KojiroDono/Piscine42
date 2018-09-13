/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 20:07:46 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/31 15:57:39 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		r;

	r = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		r = nb * ft_recursive_power(nb, power - 1);
	return (r);
}
