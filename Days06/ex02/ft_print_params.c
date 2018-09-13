/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 13:39:21 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/04 10:52:45 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int a;
	int b;

	a = 1;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
			ft_putchar(av[a][b++]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
