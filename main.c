#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"

// TODO remove .gitignore

int	main(void)
{
	char text[] = "hello         ";
	char *d = text + 1;
	char *s = text;

	char *r = ft_memmove(d, s, 2);

	printf("%s\n", r);
}
