/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:42:03 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/03 15:42:17 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (to_find[a])
		a++;
	if (a == 0)
		return (str);
	a = 0;
	while (str[a])
	{
		b = 0;
		while (to_find[b] == str[a + b])
		{
			b++;
			if (to_find[b] == '\0')
				return (str + a);
		}
		a++;
	}
	return (0);
}
