/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 16:51:21 by auguyon           #+#    #+#             */
/*   Updated: 2018/08/30 16:05:04 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98 && (b != 99 || b == 99))
				ft_putchar(',');
			if (a != 98 && (b != 99 || b == 99))
				ft_putchar(' ');
			b++;
		}
		a++;
	}
}
