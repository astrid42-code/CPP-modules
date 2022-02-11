# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 16:03:47 by astridgault       #+#    #+#              #
#    Updated: 2022/02/11 16:04:40 by astridgault      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Karen_2.0

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	main.cpp Karen.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Karen.hpp

.c.o:
			$(CC) $(CFLAGS) -g -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS_FILE)
			$(CXX) $(CPPFLAGS) $(OBJS_FILE) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS_FILE)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re