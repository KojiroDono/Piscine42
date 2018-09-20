/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:34:45 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/19 13:18:44 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		do_op(int a, char *op, int c);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		mult(int a, int b);

int		add(int a, int b);

int		sous(int a, int b);

int		div(int a, int b);

int		mod(int a, int b);

#endif
