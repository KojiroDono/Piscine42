# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 16:01:21 by auguyon           #+#    #+#              #
#    Updated: 2018/09/19 14:14:38 by auguyon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =   ft_advanced_do-op

SRCS    =   display.c\
			ope.c\
			main.c

HDRS    =   do_op.h

OBJS    =   $(SRCS:.c=.o)

GCC     =   gcc

CFLAGS  =   -Wall -Werror -Wextra

RM      =   rm -rf

CLEAN   =   clean

all     :
			@make $(NAME)

$(NAME) :   $(OBJS)
			$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)

clean   :
			$(RM) $(OBJS)

fclean  :   clean
			$(RM) $(NAME)

re      :   fclean all
