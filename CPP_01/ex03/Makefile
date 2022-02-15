# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 15:13:37 by asgaulti          #+#    #+#              #
#    Updated: 2022/02/15 14:43:57 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	UselessViolence

CXX			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	Weapon.cpp HumanA.cpp main.cpp HumanB.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Weapon.hpp HumanA.hpp HumanB.hpp

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