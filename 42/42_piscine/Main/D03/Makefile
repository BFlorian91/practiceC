NAME02 = ft_swap
NAME07 = ft_strrev
NAME08 = ft_atoi
NAME09 = ft_sort_integer_table

EX02 = ../ex02/ft_swap.c
EX07 = ../ex07/ft_strrev.c
EX08 = ../ex08/ft_atoi.c
EX09 = ../ex09/ft_sort_integer_table.c

MAIN02 = main02.c
MAIN07 = main07.c
MAIN08 = main08.c
MAIN09 = main09.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: clean $(NAME02) $(NAME07) $(NAME08) $(NAME09)

$(NAME02): 
		$(CC) -o $(NAME02) $(CFLAGS) $(MAIN02) $(EX02)
$(NAME07): 
		$(CC) -o $(NAME07) $(CFLAGS) $(MAIN07) $(EX07)
$(NAME08): 
		$(CC) -o $(NAME08) $(CFLAGS) $(MAIN08) $(EX08)
$(NAME09): 
		$(CC) -o $(NAME09) $(CFLAGS) $(MAIN09) $(EX09)

clean: 
		/bin/rm -f $(NAME02) $(NAME07) $(NAME08) $(NAME09)

