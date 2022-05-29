# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 13:26:58 by gkintana          #+#    #+#              #
#    Updated: 2022/05/29 21:15:19 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	exercise_01

SRCS		=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp
				
OBJS		=	$(SRCS:%cpp=%o)

CC			=	c++ -std=c++98
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"
GREEN		=	"\033[1;32m"
CYAN		=	"\033[3;36m"

%.o : %.cpp
			@printf $(CYAN)
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $@
			@echo $(DEFAULT)$(GREEN)"C++ Module 01: Exercise 01 Ready"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted exercise 01 object files"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted exercise 01 executable"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
