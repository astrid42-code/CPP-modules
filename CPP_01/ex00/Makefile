# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 10:56:01 by astridgault       #+#    #+#              #
#    Updated: 2022/02/13 20:26:14 by astridgault      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	brainz

CXX			=	c++

CPPFLAGS		=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	  Zombie.hpp

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