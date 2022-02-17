# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 16:27:06 by asgaulti          #+#    #+#              #
#    Updated: 2022/02/17 12:23:06 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Fixed

CXX			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	Fixed.cpp Fixed_op.cpp main.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Fixed.hpp

.c.o:
			$(CXX) $(CPPFLAGS) -g -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS_FILE)
			$(CXX) $(CPPFLAGS) $(OBJS_FILE) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS_FILE)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re