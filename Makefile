

SRC = ft_putnbr.c ft_putchar.c ft_putstr.c ft_putunbr.c ft_puthex.c ft_putpointer.c ft_printf.c\
		

OBJ = $(SRC:.c=.o)

CC = gcc

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean all