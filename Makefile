#---- Program Name ----#
NAME =	push_swap

#---- Complier, remove and compliation flags ----#
CC =	gcc
RM =	rm -rf
CFLAGS =	-Wall -Wextra -Werror -I

#---- Directory ----#
LIBFT = libft/libft.a
SRC_DIR =	srcs/
INCLUDE_DIR =	includes/
OBJ_DIR =	objs/

#---- Source files ----#
MAIN_DIR = $(SRC_DIR)main/main.c \
					$(SRC_DIR)main/errors_handling.c \
					$(SRC_DIR)main/stack_setup.c \
					$(SRC_DIR)main/stack_utils.c \
					$(SRC_DIR)main/split_string.c \

ALGORITHM_DIR = $(SRC_DIR)algorithm/a_node_setup.c \
					$(SRC_DIR)algorithm/b_node_setup.c \
					$(SRC_DIR)algorithm/sort_three.c \
					$(SRC_DIR)algorithm/stack_sort.c \

OPERATIONS_DIR = $(SRC_DIR)operations/push.c \
					$(SRC_DIR)operations/rev_rotate.c \
					$(SRC_DIR)operations/rotate.c \
					$(SRC_DIR)operations/swap.c \

#---- Compilation target ----#
SRCS = $(MAIN_DIR) $(ALGORITHM_DIR) $(OPERATIONS_DIR)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

#---- Complie program ----#
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(INCLUDE_DIR) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "push_swap program has been created!"

$(LIBFT):
	@make -C ./libft

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

#---- Remove objects / program / re-complie ----#
clean:
	@$(RM) $(OBJ_DIR)
	@make clean -C ./libft
	@echo "push_swap OBJ cleaned."
	
fclean: clean
	@$(RM) $(NAME)
	@echo "push_swap program cleaned."
	@$(RM) $(LIBFT)
	@echo "Libft/libft.a cleaned."

re: fclean all

#---- Do not represent files ----#
.PHONY: all clean fclean re
