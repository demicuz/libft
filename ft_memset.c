#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char *p;

	p = s;
	c &= 0b11111111;

	while (n)
	{
		*p = c;
		p++;
		n--;
	}

	return (s);
}
