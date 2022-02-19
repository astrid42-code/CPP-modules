# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 16:48:09 by asgaulti          #+#    #+#              #
#    Updated: 2022/02/19 16:49:12 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	LineWork

CXX			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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