/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 18:21:00 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/19 18:54:09 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [ + - * / % ] are accepted.\n");
	return (0);
}

int		ft_check_op(char *op, char *s)
{
	int i;

	i = 0;
	if (ft_atoi(s) == 0 && !(ft_strcmp(g_opptab[4].str, op)))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (2);
	}
	if (ft_atoi(s) == 0 && !(ft_strcmp(g_opptab[3].str, op)))
	{
		write(1, "Stop : division by zero\n", 24);
		return (2);
	}
	while (i < 5)
	{
		if (!(ft_strcmp(g_opptab[i++].str, op)))
			return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	if (ac != 4)
		return (0);
	j = ft_check_op(av[2], av[3]);
	if (ac == 4 && j == 0)
	{
		while (ft_strcmp(av[2], g_opptab[i].str))
			i++;
		ft_putnbr((*g_opptab[i].op)(ft_atoi(av[1]), ft_atoi(av[3])));
		ft_putchar('\n');
		return (0);
	}
	else if (ac == 4 && j != 2)
		(*g_opptab[5].op)(ft_atoi(av[1]), ft_atoi(av[3]));
	return (0);
}
