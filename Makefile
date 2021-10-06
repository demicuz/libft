CC		=	gcc
# FLAGS	=	-Wall -Werror -Wextra
FLAGS	= 

NAME	=	libft.a
# TODO : compile a library with ar

# HDIR	=	./include/
HDIR	= .

S		=	$(wildcard *.c */*.c */*/*.c)
H		=	$(wildcard *.h */*.h */*/*.h)
O		=	$(S:.c=.o)

RM		=	rm -rf

.PHONY:	all clean fclean re

all:	$(NAME)

$(NAME):	$(O)
	@$(CC) $(FLAGS) -o $(NAME) $(O)

.c.o:
	@$(CC) $(FLAGS) -c $< -o $@ -I $(HDIR)

clean:
	@$(RM) $(O)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all