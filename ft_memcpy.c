#include <stdlib.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char *d = dest;
	char *s = src;

	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}

	return (dest);
}
