/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 13:55:08 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 17:31:36 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/colle.h"

int		main(int argc, char **argv)
{
	char	(*f[5])(int, int, int, int);
	int		i;
	int		pipe;
	char	*str;
	t_dim	size;

	(void)argv;
	pipe = 0;
	if (argc == 1)
	{
		f[0] = colle00;
		f[1] = colle01;
		f[2] = colle02;
		f[3] = colle03;
		f[4] = colle04;
		i = 0;
		str = str_alloc();
		size = find_x_y(str);
		if (size.x <= 0 && size.y <= 0)
		{
			ft_putstr("aucune");
			ft_putchar('\n');
			return (0);
		}
		while (i < 5)
		{
			if (!ft_strcmp(str, rush(size.x, size.y, f[i])))
			{
				if (!pipe)
				{
					result_msg(i, size);
					pipe = 1;
				}
				else if (pipe)
					result_msg_with_pipe(i, size);
			}
			i++;
		}
	}
	if (!pipe)
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}
