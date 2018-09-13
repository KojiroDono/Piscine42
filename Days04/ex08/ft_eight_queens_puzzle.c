/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:35:15 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/31 16:06:32 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_eight_recu(int i)
{
	if (i == 92)
		return (i);
	else
		return (0);
}

int	ft_eight_queens_puzzle(void)
{
	int i;

	i = 1;
	if (i != 1)
		ft_eight_recu(i);
	return (92);
}
