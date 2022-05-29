# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#              #
#    Updated: 2022/05/29 21:20:36 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRCS		=	main.cpp \
				Contact.cpp \
				PhoneBook.cpp
				
OBJS		=	$(SRCS:%cpp=%o)

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
			@echo $(RED)"Deleted exercise 01 object file"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted exercise 01 executable"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re
