#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"

// TODO remove .gitignore

int	main(void)
{
	char s[] = "hello world"; // strlen = 11
	// char s2[] = "hello world"; // strlen = 11

	ft_bzero(&s[1], 5);
	// char *p2 = ft_memset(s2, 12345, 11);
	printf("%s\n", s);
	// printf("%s\n", p2);
	// printf("%d\n", 12345 % 128);
	// printf("%c\n", 12345 % 128);
	// printf("%c\n", 12345 & 127);
	// printf("%c\n", 12345 & 0b11111111);
}
