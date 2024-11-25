cc = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c	ft_putnbr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc libftprintf.a $(OBJ)

$(OBJ) : $(SRC) ft_printf.h
	$(cc) $(CFLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: clean fclean