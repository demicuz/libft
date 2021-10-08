#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	else if (dest != src)
	{
		d = dest;
		s = (char *)src;
		while (n)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	return (dest);
}
