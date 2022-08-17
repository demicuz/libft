NAME	=	libft.a

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra

SRC		=	char/ft_isalnum.c \
			char/ft_isalpha.c \
			char/ft_isascii.c \
			char/ft_isdigit.c \
			char/ft_isprint.c \
			char/ft_tolower.c \
			char/ft_toupper.c \
			list/ft_lstadd_back.c \
			list/ft_lstadd_front.c \
			list/ft_lstclear.c \
			list/ft_lstdelone.c \
			list/ft_lstiter.c \
			list/ft_lstlast.c \
			list/ft_lstmap.c \
			list/ft_lstnew.c \
			list/ft_lstsize.c \
			mem/ft_bzero.c \
			mem/ft_calloc.c \
			mem/ft_memchr.c \
			mem/ft_memcmp.c \
			mem/ft_memcpy.c \
			mem/ft_memcpy_int.c \
			mem/ft_memmove.c \
			mem/ft_memset.c \
			misc/ft_atoi.c \
			misc/ft_itoa.c \
			put/ft_putchar.c \
			put/ft_putchar_fd.c \
			put/ft_putendl_fd.c \
			put/ft_putnbr.c \
			put/ft_putnbr_fd.c \
			put/ft_putstr.c \
			put/ft_putstr_fd.c \
			str/ft_split.c \
			str/ft_strchr.c \
			str/ft_strcmp.c \
			str/ft_strdup.c \
			str/ft_striteri.c \
			str/ft_strjoin.c \
			str/ft_strlcat.c \
			str/ft_strlcpy.c \
			str/ft_strlen.c \
			str/ft_strmapi.c \
			str/ft_strncmp.c \
			str/ft_strnstr.c \
			str/ft_strrchr.c \
			str/ft_strtrim.c \
			str/ft_substr.c


OBJ		=	$(SRC:.c=.o)
H		=	libft.h

RM		=	rm -rf

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(H)
	$(CC) -I . $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
