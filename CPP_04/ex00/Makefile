# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 12:16:36 by asgaulti          #+#    #+#              #
#    Updated: 2022/02/20 13:31:25 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Polymorphism

CXX			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp \
				WrongCat.cpp main.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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