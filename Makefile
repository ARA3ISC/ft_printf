NAME = libftprintf.a
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_putchar.c ft_putnbr_u_dec.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_printf.c ft_putnbr_add.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
