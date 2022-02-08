# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 10:09:07 by astridgault       #+#    #+#              #
#    Updated: 2022/02/08 10:49:16 by astridgault      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mydreamjob

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror --std=c++98
# --std=c++98 pour verifier qu on n utilise pas c++11

RM			=	rm -f

OBJS		=	Account.cpp tests.cpp

OBJS_FILE	=	$(OBJS:.cpp=.o)

INCL		=	 Account.hpp

.cpp.o:
			$(CC) $(CFLAGS) -g -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS_FILE)
			$(CC) $(CFLAGS) $(OBJS_FILE) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS_FILE)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re