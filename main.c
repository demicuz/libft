#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include "libft.h"

int	main(void)
{
	int c = 'a';
	int r1 = isalpha(c); // 1024 on Kubuntu gcc
	int r2 = ft_isalpha(c);

	printf("%d\n", r1);
	printf("%d\n", r2);
}
