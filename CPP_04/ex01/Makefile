# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 21:46:40 by astridgault       #+#    #+#              #
#    Updated: 2022/02/24 17:30:23 by astridgault      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Polymorphism_Brain

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp 
			#	WrongAnimal.cpp WrongCat.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Animal.hpp Cat.hpp Dog.hpp Brain.hpp 
			#	WrongAnimal.hpp WrongCat.hpp

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