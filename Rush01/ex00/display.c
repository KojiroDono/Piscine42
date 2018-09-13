/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 11:51:46 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/09 23:02:33 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	error_msg(void)
{
	write(1, "Error\n", 6);
}

int		errors(int ac, char **av)
{
	int i;
	int k;

	ac = 0;
	i = 1;
	k = 0;
	while (i < 10)
	{
		while (av[i][k] != '\0')
		{
			if ((av[i][k] > '9' || av[i][k] < '1') && av[i][k] != '.')
				return (1);
			k++;
		}
		if (k != 9)
			return (1);
		k = 0;
		i++;
	}
	return (0);
}

void	print_array(int array[9][9])
{
	int line;
	int col;

	line = 0;
	while (line < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putchar(array[line][col] + '0');
			if (col != 8)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
