# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 11:02:11 by asgaulti          #+#    #+#              #
#    Updated: 2022/02/08 10:28:57 by astridgault      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror --std=c++98
# --std=c++98 pour verifier qu on n utiise pas c++11

RM			=	rm -f

OBJS		=	megaphone.cpp

OBJS_FILE	=	$(OBJS:.cpp=.o)

.cpp.o:
			$(CC) $(CFLAGS) -g -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS_FILE)
			$(CC) $(CFLAGS) $(OBJS_FILE) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS_FILE)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re