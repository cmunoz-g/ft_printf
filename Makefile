NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDE = ft_printf.h
SRCS = \
		ft_printf.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \
		ft_putunbr.c \
		main.c \

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ) $(INCLUDE)
	ar -rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re