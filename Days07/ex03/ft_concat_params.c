/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:00:48 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/12 18:20:48 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[i])
		dest[a++] = src[i++];
	dest[a] = '\n';
	dest[a + 1] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int ac, char **av)
{
	int		a;
	int		b;
	char	*tab;

	a = 1;
	while (a < ac)
		b = b + ft_strlen(av[a++]);
	if (!(tab = (char*)malloc(sizeof(*tab) * (b + 1))))
		return (0);
	a = 1;
	while (a < ac)
		tab = ft_strcat(tab, av[a++]);
	b = ft_strlen(tab);
	tab[b - 1] = '\0';
	return (tab);
}
