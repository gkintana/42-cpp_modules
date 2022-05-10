# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 22:17:31 by gkintana          #+#    #+#              #
#    Updated: 2022/05/10 21:52:13 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	exercise_04

SRCS		=	main.cpp \
				File.cpp
		
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
			@echo $(DEFAULT)$(GREEN)"C++ Module 01: Exercise 04 Ready"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted object files 🗃️"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME) *.replace
			@echo $(RED)"Deleted executable and <filename>.replace file 😢"$(DEFAULT)

re:			fclean all

test:
			./exercise_04 examples Test Sample

.PHONY:		all clean fclean re test
