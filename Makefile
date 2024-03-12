NAME =	push_swap

CC =	gcc
AR =	ar rcs
RM =	rm -rf
CFLAGS =	-Wall -Wextra -Werror
IFLAGS =	-I $(INCLUDE_DIR)
DFLAGS =	-MMD -MP -O1

SRC_DIR =	srcs
INCLUDE_DIR =	includes
OBJ_DIR =	objs

SRC_FILES =	$(SRC_DIR)/

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)

all: $(NAME)

-include $(DEPS)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(DFLAGS) -c -o $@ $< $(IFLAGS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ_DIR)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
