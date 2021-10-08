#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"
// useful: https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html
int	main(void)
{
	char dest[20] = "hello";
	char src[] = " world";
	// strcpy(dest, src);
	int r = strlcat(dest, src, 20);
	// strncpy(dest, src, 2);

	for (int i = 0; i < 20; i++)
	{
		printf("%c", dest[i]);
	}
	puts("");
	printf("strlcpy: %d\n", r);

	char dest2[20] = "hello";
	char src2[] = " world";
	int r2 = ft_strlcpy(dest2, src2, 2);

	for (int i = 0; i < 20; i++)
	{
		printf("%c", dest2[i]);
	}
	puts("");
	printf("ft_strlcpy: %d\n", r2);
}
