NAME		= libftprintf.a

SRCS		= output_funcs.c \printf.c \putbase.c \utils.c \output_funcs2.c

OBJS		= $(SRCS:%.c=%.o)

CC			= gcc

AR			= ar rc

FLAGS		= -Wall -Werror -Wextra

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS) -I ./
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean: clean
	rm -f $(NAME)

fclean:
	rm -f $(OBJS) $(NAME) 

re: fclean all
