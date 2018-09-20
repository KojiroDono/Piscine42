/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 08:55:02 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/19 14:23:01 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef struct	s_opp
{
	char		*str;
	int			(*op)(int, int);
}				t_opp;

int				ft_add(int a, int b);

int				ft_sub(int a, int b);

int				ft_mul(int a, int b);

int				ft_div(int a, int b);

int				ft_mod(int a, int b);

int				ft_usage(int a, int b);

void			ft_putchar(char c);

void			ft_putstr(char *str);

void			ft_putnbr(int nb);

int				ft_atoi(char *str);

int				ft_strcmp(char *s1, char *s2);

#endif
