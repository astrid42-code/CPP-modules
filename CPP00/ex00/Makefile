# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 11:02:11 by asgaulti          #+#    #+#              #
#    Updated: 2021/12/10 11:30:57 by asgaulti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm

OBJS		=	megaphone.cpp

OBJS_FILE	=	$(OBJS:.cpp=.o)

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS_FILE)
			$(CC) $(CFLAGS) $(OBJS_FILE) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS_FILE)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re