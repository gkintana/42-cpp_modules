# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 13:26:58 by gkintana          #+#    #+#              #
#    Updated: 2022/03/03 15:32:34 by gkintana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	horde

SRCS		=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp
				
OBJS		=	$(SRCS:%cpp=%o)

CC			=	c++
CFLAGS		=	-g -Wall -Wextra -Werror
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
			@echo $(DEFAULT)$(GREEN)"🧟🧟🧟  Zombies Ready 🧟🧟🧟"$(DEFAULT)

clean:
			@$(RM) $(OBJS)
			@echo $(RED)"Deleted Zombie object files 🗃️"$(DEFAULT)

fclean:		clean
			@$(RM) $(NAME)
			@echo $(RED)"Deleted Zombie executable 😢"$(DEFAULT)

re:			fclean all

.PHONY:		all clean fclean re test
