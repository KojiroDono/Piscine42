# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: auguyon <auguyon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 11:27:48 by auguyon           #+#    #+#              #
#    Updated: 2018/09/19 13:17:27 by auguyon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

SRCS	=	main.c\
			do_op.c\
			display.c\
			operateur.c

HDRS	=	do_op.h

OBJS	=	$(SRCS:.c=.o)

GCC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

CLEAN	=	clean

LIB		=	-L. -lmalib

all		:
			@make $(NAME)

$(NAME)	:	$(OBJS)
			$(GCC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
