# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 21:02:44 by astridgault       #+#    #+#              #
#    Updated: 2022/03/16 21:03:17 by astridgault      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Mutant

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98 -g3

RM			=	rm -f

SRCS		=	main.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	MutantStack.hpp

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