# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#              #
#    Updated: 2022/02/28 20:26:56 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRCS		=	phonebook.cpp
OBJS		=	$(SRCS:%cpp=%o)

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

DEFAULT		=	"\033[0m"
RED			=	"\033[0;31m"
GREEN		=	"\033[1;32m"
YELLOW		=	"\033[0;33m"
YELLOW_BU	=	"\033[1;4;33m"
CYAN		=	"\033[0;36m"
CYAN_I		=	"\033[3;36m"
PURPLE		=	"\033[0;35m"

%.o : %.cpp
			@printf $(CYAN_I)
			$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $@
			@echo $(DEFAULT)$(GREEN)"Phonebook Ready 📖"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted phonebook object file 🗃️"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted phonebook executable 😢"$(DEFAULT)

norm:
			@echo $(DEFAULT)$(YELLOW_BU)"phonebook .cpp file"$(DEFAULT)$(CYAN_I)
			@norminette -R CheckForbiddenSourceHeader ./*.c

re:			fclean all

.PHONY:		all clean fclean re test
