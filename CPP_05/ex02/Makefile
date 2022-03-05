# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 13:47:36 by astridgault       #+#    #+#              #
#    Updated: 2022/03/05 16:07:50 by astridgault      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Form_28B

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp ShrubberyCreationForm.cpp 

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
				RobotomyRequestForm.hpp	ShrubberyCreationForm.hpp 

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