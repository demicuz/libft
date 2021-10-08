#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"
// useful: https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html
int	main(void)
{
	char text[] = "hello         ";
	char *d = text + 1;
	char *s = text;

	// char *r = ft_memmove(d, s, 2);
	char *r = ft_memcpy(NULL, NULL, 3);

	if (r)
		printf("%s\n", r);
	else
		puts("nullptr");
}
