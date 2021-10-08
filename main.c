#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"
// useful: https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html
int	main(void)
{
	char name[2];
	char p[] = "hello world";
	strlcpy(name, p, (size_t) 2);

	printf("%s\n", name);
}
