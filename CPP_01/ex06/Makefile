# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 12:36:57 by astridgault       #+#    #+#              #
#    Updated: 2022/02/15 14:40:40 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	karenFilter

CXX			=	c++

CPPFLAGS		=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	main.cpp Karen.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Karen.hpp

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