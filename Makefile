NAME =	push_swap

CC =	gcc
RM =	rm -rf
CFLAGS =	-Wall -Wextra -Werror -I

LIBFT = libft/libft.a
SRC_DIR =	srcs
INCLUDE_DIR =	includes
OBJ_DIR =	objs

SRC_FILES =	handle_errors.c \
						init_a_to_b.c \
						init_b_to_a.c \
						push_swap.c \
						push.c \
						rev_rotate.c \
						rotate.c \
						sort_stack.c \
						sort_three.c \
						stack_init.c \
						stack_utils.c \
						swap.c \

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

start:
	make all

$(LIBFT):
	make -C ./libft

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INCLUDE_DIR) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)
	make clean -C ./libft
	
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
