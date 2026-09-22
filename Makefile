NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRC = ft_isalpha \
	
OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	 ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
