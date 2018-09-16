/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:52:32 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 17:11:51 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/colle.h"

char	*str_alloc(void)
{
	char	*buf;
	char	*str;
	int		nb;

	if (!(buf = (char*)malloc(BIG_ALLOC)))
        return (0);
	nb	= read(0, buf, BIG_ALLOC);
    if (nb < 0)
	{
		ft_putstr("aucune");
		return (0);
	}	
	buf[nb] = '\0';
	if (!(str = (char*)malloc(sizeof(*str) * (nb + 1))))
        return (0);
	str = ft_strcpy(str, buf);
	free(buf);
	return (str);
}

char	*rush(int x, int y, char (*f)(int, int, int, int))
{
	int		r;
	int		c;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (((x + 1) * y) + 1));
	if (x > 0 && y > 0)
	{
		r = 0;
		while (r < y && r < 2147483647)
		{
			c = 0;
			while (c < x && c < 2147483647)
			{
				str = ft_strcat(str, f(x, y, c, r));
				c++;
			}
			r++;
			str = ft_strcat(str, '\n');
		}
		str[(((x + 1) * y) + 1)] = '\0';
	}
	return (str);
}
