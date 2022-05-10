# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#              #
#    Updated: 2022/05/10 21:06:30 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PhoneBook

SRCS		=	main.cpp \
				Contact.cpp \
				PhoneBook.cpp
				
OBJS		=	$(SRCS:%cpp=%o)

# https://stackoverflow.com/questions/12606713/enforcing-the-c98-standard-in-gcc
CC			=	c++ -std=c++98
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"
GREEN		=	"\033[1;32m"
CYAN		=	"\033[0;36m"

%.o : %.cpp
			@printf $(CYAN)
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $@
			@echo $(DEFAULT)$(GREEN)"C++ Module 00: Exercise 01 Ready"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted object file 🗃️"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted executable 😢"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
