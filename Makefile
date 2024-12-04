NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ft_*.c)
BONUS = $(wildcard ft_lst*.c)
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
$(OBJ): $(SRC)
	cc -c $^

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

$(OBJ_BONUS): $(BONUS)
	cc -c $^
