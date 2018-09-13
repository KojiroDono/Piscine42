/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 11:49:21 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/04 10:48:19 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		ft_putstr(av[0]);
	return (0);
}
