NAME = libft.a

SRCS =	./srcs/ft_putstr.c \
		./srcs/ft_putchar.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c

OBJS = $(SRCS:.c=.o)

INC = ./includes

CFLAGS =  -Wall -Wextra -Werror

AR = ar rc

CC = gcc

%.o:%.c
	$(CC) $(CFLAGS) -I $(INC) -o $@ -c $<

$(NAME): $(OBJS) $(INC)
	$(AR) $(NAME) $(OBJS) 

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re