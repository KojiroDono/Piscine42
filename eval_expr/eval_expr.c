/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arfohrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:43:33 by arfohrer          #+#    #+#             */
/*   Updated: 2018/02/24 16:32:08 by arfohrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int	execute_signe(int nb1, int nb2, char signe)
{
	if (signe == '+')
		return (nb1 + nb2);
	else if (signe == '-')
		return (nb1 - nb2);
	else if (signe == '*')
		return (nb1 * nb2);
	else if (signe == '/')
		return (nb1 / nb2);
	else if (signe == '%')
		return (nb1 % nb2);
	else
		return (0);
}

int	nb_or_pare(char *str, int *i)
{
	int back;
	int signe;

	back = 0;
	signe = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signe = -1;
		*i += 1;
	}
	if (str[*i] == '(')
	{
		*i += 1;
		back = rec_all(str, i);
		*i += 1;
		return (signe * back);
	}
	while ('0' <= str[*i] && str[*i] <= '9')
	{
		back = (back * 10) + str[(*i)++] - '0';
	}
	return (signe * back);
}

int	rec_mult_div_mod(char *str, int *i)
{
	int		nb1;
	int		nb2;
	char	signe;

	nb1 = nb_or_pare(str, i);
	while (str[*i] == '*' || str[*i] == '/' || str[*i] == '%')
	{
		signe = str[(*i)++];
		nb2 = nb_or_pare(str, i);
		nb1 = execute_signe(nb1, nb2, signe);
	}
	return (nb1);
}

int	rec_all(char *str, int *i)
{
	int		nb1;
	int		nb2;
	char	signe;

	nb1 = nb_or_pare(str, i);
	while (str[*i] != '\0' && str[*i] != ')')
	{
		signe = str[(*i)++];
		if (signe == '+' || signe == '-')
			nb2 = rec_mult_div_mod(str, i);
		else
			nb2 = nb_or_pare(str, i);
		nb1 = execute_signe(nb1, nb2, signe);
	}
	return (nb1);
}

int	eval_expr(char *expr)
{
	int	i;
	char*str;

	i = 0;
	str = delete_spaces(expr);
	if (!str[0])
		return (0);
	return (rec_all(str, &i));
}
