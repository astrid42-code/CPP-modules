# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 19:02:34 by asgaulti          #+#    #+#              #
#    Updated: 2022/01/15 12:02:11 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	myphonebook

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror --std=c++98
# --std=c++98 pour verifier qu on n utiise pas c++11

RM			=	rm -f

OBJS		=	contacts.cpp phonebook.cpp 

OBJS_FILE	=	$(OBJS:.cpp=.o)

INCL		=	contacts.hpp phonebook.hpp 

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