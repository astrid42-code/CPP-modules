# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 10:25:11 by asgaulti          #+#    #+#              #
#    Updated: 2022/03/16 10:27:11 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Span

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98 -g3

RM			=	rm -f

SRCS		=	main.cpp Span.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Span.hpp

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