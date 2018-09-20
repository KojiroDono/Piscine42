# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 09:25:38 by auguyon           #+#    #+#              #
#    Updated: 2018/09/19 22:14:55 by auguyon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS 	= 	srcs/ft_putchar.c\
			srcs/ft_putstr.c\
			srcs/ft_strlen.c\
			srcs/ft_swap.c\
			srcs/ft_strcmp.c

OBJS    =   $(SRCS:.c=.o)

GCC     =   gcc

CFLAGS  =   -Wall -Werror -Wextra -c

RM      =   rm -rf

CLEAN   =   clean

all     :
			@make $(NAME)

$(NAME) :   $(OBJS)
			$(GCC) $(CFLAGS) $(SRCS)
			ar rc $(NAME) $(OBJS)

clean   :
			$(RM) $(OBJS)

fclean  :   clean
			$(RM) $(NAME)

re      :   fclean all
