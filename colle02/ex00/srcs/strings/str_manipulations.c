/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_manipulations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 23:22:00 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 13:50:36 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/colle.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strcat(char *str, char letter)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = letter;
	str[i + 1] = '\0';
	return (str);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_atoi(char *str)
{
	int i;
	int is_neg;
	int res;

	i = 0;
	is_neg = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		is_neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (is_neg)
		return (-res);
	return (res);
}

t_dim	find_x_y(char *str)
{
	t_dim	size;
	int		x;
	int		y;
	int		is_set;

	size.x = 0;
	size.y = 0;
	x = 0;
	y = 0;
	is_set = 0;
	while (str[x])
	{
		if (str[x] == '\n' && !is_set)
		{
			size.x = x;
			is_set = 1;
		}
		if (str[x] == '\n')
			y++;
		x++;
	}
	size.y = y;
	return (size);
}
