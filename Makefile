NAME = push_swap

SRC = push_swap.c \
			list_utils.c \
			clear_utils.c \
			FxValidate/checkav_val.c \
			FxUtils/ft_atol.c \
			FxUtils/ft_calloc.c \
			FxUtils/ft_char_utils.c \
			FxUtils/ft_num_utils.c \
			FxUtils/ft_printf.c \
			FxUtils/ft_split.c \
			FxUtils/ft_strchr.c \
			FxUtils/ft_strlen.c \
			FxUtils/ft_substr.c \
			FxMoves/push.c \
			FxMoves/reverse_rotate.c \
			FxMoves/rotate.c \
			FxMoves/swap.c \
			FxAlgorithms/little_sort.c \
			FxAlgorithms/move_utils.c \
			FxAlgorithms/turk_utils.c \
			FxAlgorithms/turkish_sort.c
			
CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re