/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergauth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 12:02:33 by jergauth          #+#    #+#             */
/*   Updated: 2018/09/16 15:18:44 by jergauth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_H
# define COLLE_H

# include <unistd.h>
# include <stdlib.h>

# define BIG_ALLOC 10000000

typedef struct	s_dim
{
	int			x;
	int			y;
}				t_dim;

char			colle00(int x, int y, int c, int r);

char			colle01(int c, int r, int x, int y);

char			colle02(int c, int r, int x, int y);

char			colle03(int c, int r, int x, int y);

char			colle04(int c, int r, int x, int y);

char			*rush(int x, int y, char (*f)(int, int, int, int));

char			*str_alloc(void);

void			ft_putchar(char c);

void			ft_putstr(char *str);

void			ft_putnbr(int nb);

void			result_msg(int num, t_dim coor);

void			result_msg_with_pipe(int num, t_dim coor);

int				ft_strcmp(char *s1, char *s2);

char			*ft_strcat(char *str, char letter);

char			*ft_strcpy(char *dest, char *src);

int				ft_atoi(char *str);

t_dim			find_x_y(char *str);


char			*ft_strdup(char *src);

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

void				print_list(t_list **begin_list);

void				ft_list_push_back(t_list **begin_list, void *data);

#endif
