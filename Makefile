NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRC = 	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isprint.c  \
		ft_isascii.c \
		ft_strlen.c  \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c	 \
		ft_strdup.c  \
		ft_calloc.c	 \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strchr.c  \
		ft_strchr.c


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
