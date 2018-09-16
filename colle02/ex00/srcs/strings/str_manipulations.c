/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_manipulations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 23:22:00 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 17:11:27 by jergauth         ###   ########.fr       */
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
