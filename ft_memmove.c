#include <stdlib.h>

static void	*ft_just_cpy(void *dest, const void *src, size_t n)
{
	return (NULL);
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
		{
			while (n)
			{
				*d = *s;
				d++;
				s++;
				n--;
			}
		}
	}
	return (dest);
}
