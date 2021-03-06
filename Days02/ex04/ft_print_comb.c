/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 14:28:30 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/31 13:27:39 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int		a[3];

	a[0] = 0;
	while (a[0] <= 7)
	{
		a[1] = a[0] + 1;
		while (a[1] <= 8)
		{
			a[2] = a[1] + 1;
			while (a[2] <= 9)
			{
				ft_putchar(a[0] + '0');
				ft_putchar(a[1] + '0');
				ft_putchar(a[2] + '0');
				if (a[0] == 7 && a[1] == 8 && a[2] == 9)
					return ;
				ft_putchar(',');
				ft_putchar(' ');
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}
