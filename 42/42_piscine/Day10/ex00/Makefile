# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ravernhe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 18:19:41 by ravernhe          #+#    #+#              #
#    Updated: 2018/08/23 21:08:25 by flbeaumo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c \
	  srcs/ft_putstr.c

O = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(O)
	@$(CC) -o $(NAME) $(O)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -f $(O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
