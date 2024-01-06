# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csakamot <csakamot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/01 14:21:20 by csakamot          #+#    #+#              #
#    Updated: 2024/01/06 18:45:25 by csakamot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##----Executable File Name-----##
NAME			= megaphone
##-----------------------------##

##------------Srcs-------------##
MAINSRC			= megaphone.cpp
##-----------------------------##

##-----------Object------------##
OBJS			= ${MAINSRC:.cpp=.o}
##-----------------------------##

##----------conpiler-----------##
CC				= g++
CFLAGS			= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
##-----------------------------##

##-----------archive-----------##
ARFLAG			= rcs
##-----------------------------##

##--------Makefile rule--------##
all:			${NAME}

%.o:%.c
				${CC} ${CFLAGS} -I ${HEAD} -c $< -o $@

${NAME}:        ${OBJS}
				@echo "object file				compiled"
				@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
				@${RM} ${OBJS}
				@echo "object file				removed"

fclean:			clean
				@${RM} ${NAME}

re:				fclean all

exe:			re
				@make -s clean

.PHONY:			all clean fclean re exe
##-----------------------------##%