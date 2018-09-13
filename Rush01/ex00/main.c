/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 19:18:14 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/09 23:03:46 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_sudoku.h"

int		main(int ac, char **av)
{
	int	array[9][9];
	int rev_array[9][9];

	if (ac != 10)
	{
		error_msg();
		return (0);
	}
	tab_char_to_int(av, *(&array));
	if (errors(ac, av) || check_array_validity(*(&array)))
	{
		error_msg();
		return (0);
	}
	array_cpy(*(&array), (*(&rev_array)));
	sudoku_solver(*(&array), 0);
	sudoku_solver_rev(*(&rev_array), 0);
	if (sudoku_equal_rev(*(&array), *(&rev_array)))
	{
		error_msg();
		return (0);
	}
	else
		print_array(*(&array));
	return (0);
}
