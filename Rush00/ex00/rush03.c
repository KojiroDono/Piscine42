/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 16:27:32 by lrossign          #+#    #+#             */
/*   Updated: 2018/09/02 18:01:31 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		middle_line(int x, int y)
{
	int c;

	c = 0;
	while (c < x)
	{
		if (c > 0 && c < x - 1)
			ft_putchar(' ');
		else
			ft_putchar('B');
		c++;
	}
	ft_putchar('\n');
	return (0);
}

int		first_last_line(int x, int y)
{
	int c;

	c = 0;
	if (x == 1)
		ft_putchar('A');
	else
	{
		while (c < x)
		{
			if (c == 0)
				ft_putchar('A');
			if (c > 0 && c < x - 1)
				ft_putchar('B');
			if (c == x - 1)
				ft_putchar('C');
			c++;
		}
	}
	ft_putchar('\n');
	return (0);
}

int		rush(int x, int y)
{
	int l;

	l = 0;
	if (x <= 0 || y <= 0)
		return (0);
	while (l < y)
	{
		if (l == 0 | l == y - 1)
			first_last_line(x, y);
		else
			middle_line(x, y);
		l++;
	}
	return (0);
}
