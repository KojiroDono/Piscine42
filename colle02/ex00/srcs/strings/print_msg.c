/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 22:37:44 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 17:11:33 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/colle.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	result_msg(int num, t_dim coor)
{
	ft_putchar('[');
	ft_putstr("colle-0");
	ft_putchar(num + 48);
	ft_putstr("] [");
	ft_putnbr(coor.x);
	ft_putstr("] [");
	ft_putnbr(coor.y);
	ft_putchar(']');
}

void	result_msg_with_pipe(int num, t_dim coor)
{
	ft_putstr(" || ");
	ft_putchar('[');
	ft_putstr("colle-0");
	ft_putchar(num + 48);
	ft_putstr("] [");
	ft_putnbr(coor.x);
	ft_putstr("] [");
	ft_putnbr(coor.y);
	ft_putchar(']');
}
