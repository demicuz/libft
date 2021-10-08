#include <stdlib.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = dest;
	s = (char *)src;
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = dest;
	s = (char *) src;
	if (src < dest)
	{
		while (n)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
