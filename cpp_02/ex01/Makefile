# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 22:15:59 by gkintana          #+#    #+#              #
#    Updated: 2022/03/06 01:22:45 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	exercise_01

SRCS		=	main.cpp \
				Fixed.cpp
		
OBJS		=	$(SRCS:%cpp=%o)

CC			=	c++
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
			@echo $(DEFAULT)$(GREEN)"C++ Module 02: Exercise 01 Ready"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted object files 🗃️"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted executable file 😢"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
