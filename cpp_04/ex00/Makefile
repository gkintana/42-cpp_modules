# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 23:54:36 by gkintana          #+#    #+#              #
#    Updated: 2022/06/06 23:40:45 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	exercise_00

SRCS		=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

OBJS		=	$(SRCS:%cpp=%o)

CXX			=	c++
CPPFLAGS	=	-std=c++98 -Wall -Wextra -Werror
RM			=	rm -rf

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"
GREEN		=	"\033[1;32m"
CYAN		=	"\033[3;36m"

%.o : %.cpp
			@printf $(CYAN)
			$(CXX) $(CPPFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CPPFLAGS) $(OBJS) -o $@
			@echo $(DEFAULT)$(GREEN)"C++ Module 04: Exercise 00 Ready"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted exercise 00 object files"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted exercise 00 executable file"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
