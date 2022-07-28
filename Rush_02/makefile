# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 13:58:56 by sapalazz          #+#    #+#              #
#    Updated: 2022/07/24 17:16:51 by sapalazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
CC = gcc
FLAG = -Wall -Werror -Wextra
FUNCTIONS = main.c func_read.c func_print.c

all: $(NAME)

$(NAME):
	$(CC) $(FLAG) -o $(NAME) $(FUNCTIONS)

fclean:
	rm -rf $(NAME)

re: fclean $(NAME)
