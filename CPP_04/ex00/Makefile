# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 12:16:36 by asgaulti          #+#    #+#              #
#    Updated: 2022/02/23 14:20:26 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Polymorphism

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98
# CXXFLAGS pour compil cpp uniquement
# CPPFLAGS pour compil cpp et c

RM			=	rm -f

SRCS		=	main.cpp Animal.cpp Cat.cpp 
# Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Animal.hpp Cat.hpp 
#Dog.hpp WrongAnimal.hpp WrongCat.hpp

.c.o:
			$(CXX) $(CXXFLAGS) -g -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS_FILE)
			$(CXX) $(CXXFLAGS) $(OBJS_FILE) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS_FILE)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re