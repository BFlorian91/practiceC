#!/bin/sh

gcc -c ft_putchar.c ft_putstr.c ft_swap.c ft_strcmp.c ft_strlen.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o
ranlib libft.a
rm *.o


