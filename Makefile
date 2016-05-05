# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcoppin <vcoppin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 23:29:04 by vcoppin           #+#    #+#              #
#    Updated: 2015/11/06 23:29:23 by vcoppin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS_C = debug.c src/*.c
SRCS = $(SRCS_C)
NAME = sastantua.out

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I includes -o $(NAME) $(SRCS)

clean:
	rm -rf *.o

fclean:
	rm $(NAME)

re: fclean all
