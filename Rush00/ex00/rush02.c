/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 14:32:48 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/02 18:01:27 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		last_line(int x, int y)
{
	int c;

	c = 0;
	while (c < x)
	{
		ft_putchar('C');
		c++;
		while (c < (x - 1))
		{
			ft_putchar('B');
			c++;
		}
	}
	ft_putchar('\n');
	return (0);
}

int		mid_line(int x, int y)
{
	int a;
	int c;

	a = 0;
	c = 0;
	while (a < (y - 2))
	{
		while (c < x)
		{
			ft_putchar('B');
			c++;
			while (c < (x - 1))
			{
				ft_putchar(' ');
				c++;
			}
		}
		ft_putchar('\n');
		a++;
		c = 0;
	}
	last_line(x, y);
	return (0);
}

int		first_line(int x, int y)
{
	int c;

	c = 0;
	while (c < x)
	{
		ft_putchar('A');
		c++;
		while (c < (x - 1))
		{
			ft_putchar('B');
			c++;
		}
	}
	ft_putchar('\n');
	if (y == 1)
		return (0);
	mid_line(x, y);
	return (0);
}

int		rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		return (0);
	}
	first_line(x, y);
	return (0);
}
