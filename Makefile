NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

SRC = 	get_next_line.c\
		get_next_line_utils.c\

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC)))

$(NAME): $(OBJS)
	$(AR) $@ $^

all : $(NAME)

clean :
		$(RM) $(OBJS)

fclean : clean
		$(RM) $(NAME)

re : fclean
		$(MAKE) all

.PHONY: all clean fclean re