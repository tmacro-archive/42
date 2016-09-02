# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgaudet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/24 04:59:25 by fgaudet           #+#    #+#              #
#    Updated: 2016/08/26 05:52:45 by fgaudet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lmao

FLAG = -Wall -Wextra -Werror

HEADER = ./

all: $(NAME)

$(NAME):compile clean

compile:
	@gcc -I$(HEADER) $(FLAG) ex*/*.c main.c -o $(NAME)

clean:
	@rm -f ./ft_*.o

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
