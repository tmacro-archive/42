# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epinchon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/27 13:15:24 by epinchon          #+#    #+#              #
#    Updated: 2016/08/27 18:25:00 by epinchon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		rush-2

HPATH =		ft.h t_data.h

SRCS =		main.c \
			libft.c \
			libftextra.c \
			rush00.c \
			rush01.c \
			rush02.c \
			rush03.c \
			rush04.c

FLAGS =		-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):
		gcc -I $(HPATH) -c $(SRCS) $(FLAGS)
		gcc -o $(NAME) main.o libft.o libftextra.o rush00.o rush01.o rush02.o rush03.o rush04.o

clean:
	/bin/rm -f main.o libft.o libftextra.o rush00.o rush01.o rush02.o rush03.o rush04.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
