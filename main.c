#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"
// useful: https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html
int	main(void)
{
	char s1[] = "hello";
	char s2[] = "world";

	int r = ft_memcmp(s1, s2, 0);

	printf("%d\n", r);

	// if (p)
	// 	printf("%p: %c\n", p, *p);
	// else
	// 	puts("nullptr");
}
