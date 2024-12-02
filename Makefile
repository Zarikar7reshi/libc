NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
BUILD_PATH = ~/libft

all: $(NAME) clean

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
$(OBJ): $(SRC)
	cc -c $^

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re:
	fclean all

bonus:
