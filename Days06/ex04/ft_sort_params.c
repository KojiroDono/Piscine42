/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 14:53:05 by auguyon           #+#    #+#             */
/*   Updated: 2018/09/04 16:01:58 by auguyon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i]) != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		main(int ac, char **av)
{
	int	i;

	i = 2;
	if (ac == 1)
		return (0);
	while (i < ac)
	{
		if (ft_strcmp(av[i], av[i - 1]) < 0)
		{
			ft_swap(&av[i], &av[i - 1]);
			i = 1;
		}
		i++;
	}
	i = 1;
	while (ac > i)
		ft_putstr(av[i++]);
	return (0);
}
