#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"
// useful: https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html
int	main(void)
{
	char dest[20] = "hello";
	char src[] = " world world world world world world world world world";
	// strcpy(dest, src);
	int r = strlcat(dest, src, 20);
	// strncpy(dest, src, 2);

	for (int i = 0; i < 20; i++)
	{
		printf("%c", dest[i]);
	}
	puts("");
	printf("strlcat: %d\n", r);

	char dest2[20] = "hello";
	char src2[] = " world world world world world world world world world";
	int r2 = ft_strlcat(dest2, src2, 20);

	for (int i = 0; i < 20; i++)
	{
		printf("%c", dest2[i]);
	}
	puts("");
	printf("ft_strlcat: %d\n", r2);
}
