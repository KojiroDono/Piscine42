/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 13:58:07 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/09 22:59:36 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_sudoku.h"

void	tab_char_to_int(char **av, int array[9][9])
{
	int line;
	int col;
	int nb;

	nb = 0;
	line = 0;
	while (line < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (av[line + 1][col] == '.')
				array[line][col] = 0;
			else
				array[line][col] = av[line + 1][col] - '0';
			col++;
		}
		line++;
	}
}

int		check_array_validity(int array[9][9])
{
	int line;
	int col;
	int index;
	int nb;
	int c;

	c = 0;
	line = 0;
	index = -1;
	while (++index < 81)
	{
		line = index / 9;
		col = index % 9;
		if (array[line][col] != 0 && c++)
		{
			nb = array[line][col];
			array[line][col] = 0;
			if (check_numbers(array, index, nb) == 0)
				return (1);
			array[line][col] = nb;
		}
	}
	if (c < 17)
		return (1);
	return (0);
}

int		check_numbers(int tab[9][9], int ind, int nb)
{
	int l;
	int line;
	int col;

	line = ind / 9;
	col = ind % 9;
	l = 0;
	while (l < 9)
	{
		if (tab[line][l] == nb || tab[l][col] == nb)
			return (0);
		l++;
	}
	return (check_block(*(&tab), line, col, nb));
}

int		check_block(int tab[9][9], int line, int col, int nb)
{
	int lnblock;
	int colblock;
	int l;
	int c;

	c = 0;
	l = -1;
	lnblock = line % 3;
	colblock = col % 3;
	while (++l < 3 && c < 3)
	{
		if (tab[line - lnblock + c][col - colblock + l] == nb
				|| tab[line - lnblock + l][col - colblock + c] == nb)
			return (0);
		if (l == 3)
		{
			l = -1;
			c++;
		}
	}
	return (1);
}

int		sudoku_solver(int tab[9][9], int index)
{
	int i;
	int j;
	int k;

	i = index / 9;
	j = index % 9;
	k = 0;
	if (index == 81)
		return (1);
	if (tab[i][j] != 0)
		return (sudoku_solver(tab, index + 1));
	while (k <= 9)
	{
		if (check_numbers(tab, index, k))
		{
			tab[i][j] = k;
			if (sudoku_solver(tab, index + 1))
				return (1);
		}
		k++;
	}
	tab[i][j] = 0;
	return (0);
}
