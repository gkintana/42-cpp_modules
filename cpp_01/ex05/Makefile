# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 15:33:02 by gkintana          #+#    #+#              #
#    Updated: 2022/05/29 21:17:39 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	exercise_05

SRCS		=	main.cpp \
				Karen.cpp
		
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
			@echo $(DEFAULT)$(GREEN)"C++ Module 01: Exercise 05 Ready"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted exercise 05 object files"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted exercise 05 executable file"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
