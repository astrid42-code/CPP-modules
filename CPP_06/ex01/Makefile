# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 14:00:37 by asgaulti          #+#    #+#              #
#    Updated: 2022/03/11 16:17:13 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Serialisation

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	main.cpp Data.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Data.hpp

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