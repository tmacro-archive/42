# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irhett <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 13:13:07 by irhett            #+#    #+#              #
#    Updated: 2016/08/27 12:04:47 by tmckinno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#Compiler Name and Options
CC := gcc
C_FLAGS = -c -fsanitize=address -Wall -Wextra -Werror

#Filenames
NAME := test
FILENAMES := *.c
SRCDIR := ex*/

SRCS = $(addprefix $(SRCDIR), $(FILENAMES)) main.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o test

clean: /bin/rm test

re: clean all
