/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:00:13 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/07 16:30:05 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strstr(char *str, char *to_find)
{
	int		a;
	int		b;
	char	*tf;

	tf = to_find;
	a = 0;
	while (str[a] != '\0' && str[a] == ' ')
		a++;
	b = 0;
	while ((tf[b] == str[a] || (tf[b] -= 32) == str[a]) && tf[b])
	{
		b++;
		a++;
		if (tf[b] == '\0')
			return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	char	*s1;
	char	*s2;
	char	*s3;
	int		i;

	s1 = "bauer";
	s2 = "president";
	s3 = "attack";
	i = 1;
	while (i < ac)
	{
		if (ft_strstr(av[i], s1) == 1)
			write(1, "Alert!!!\n", 9);
		if (ft_strstr(av[i], s2) == 1)
			write(1, "Alert!!!\n", 9);
		if (ft_strstr(av[i], s3) == 1)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
