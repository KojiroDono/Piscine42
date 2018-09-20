/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:38:05 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/18 16:13:48 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][1] != '\0')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	return (0);
}
