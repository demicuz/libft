#include <stdlib.h>

static void	ft_just_cpy(char *dest, const char *src, size_t n)
{
	while (n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	else if (dest != src)
	{
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
			ft_just_cpy(dest, src, n);
	}
	return (dest);
}
