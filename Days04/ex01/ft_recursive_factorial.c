/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:49:35 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/30 19:55:29 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
