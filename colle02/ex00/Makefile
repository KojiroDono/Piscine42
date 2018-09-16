# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jergauth <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 12:52:42 by jergauth          #+#    #+#              #
#    Updated: 2018/09/16 17:37:54 by jergauth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	colle-2

SRCS	=	srcs/main.c\
			srcs/colles/colle00.c\
			srcs/colles/get_char.c\
			srcs/strings/print_msg.c\
			srcs/strings/str_manipulations.c

HDRS	=	includes/colle.h

OBJS	=	$(SRCS:.c=.o)

GCC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

CLEAN	=	clean

all		:
			@make $(NAME)

$(NAME)	:	$(OBJS)
			$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
