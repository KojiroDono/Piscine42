/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_sudoku.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:21:16 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/09 22:18:32 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_sudoku.h"

int		sudoku_solver_rev(int rev[9][9], int index)
{
	int i;
	int j;
	int k;

	i = index / 9;
	j = index % 9;
	k = 9;
	if (index < 0)
		return (1);
	if (rev[i][j] != 0)
		return (sudoku_solver(rev, index + 1));
	while (k > 0)
	{
		if (check_numbers(rev, index, k))
		{
			rev[i][j] = k;
			if (sudoku_solver(rev, index + 1))
				return (1);
		}
		k--;
	}
	rev[i][j] = 0;
	return (0);
}

void	array_cpy(int array[9][9], int rev[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			rev[i][j] = array[i][j];
			j++;
		}
		i++;
	}
}

int		sudoku_equal_rev(int array[9][9], int rev[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (array[i][j] != rev[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
