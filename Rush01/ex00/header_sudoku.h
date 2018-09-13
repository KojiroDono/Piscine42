/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_sudoku.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:35:46 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/09 22:49:16 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_SUDOKU_H
# define HEADER_SUDOKU_H

# include <unistd.h>

int		errors(int ac, char **av);

void	error_msg(void);

int		check_array_validity(int array[9][9]);

void	tab_char_to_int(char **av, int array[9][9]);

void	array_cpy(int array[9][9], int rev[9][9]);

int		sudoku_solver(int tab[9][9], int index);

int		sudoku_solver_rev(int rev[9][9], int index);

int		sudoku_equal_rev(int array[9][9], int rev[9][9]);

int		check_numbers(int tab[9][9], int ind, int nb);

void	print_array(int array[9][9]);

int		check_block(int tab[9][9], int line, int col, int nb);

#endif
