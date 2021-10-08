#include <stdlib.h>
#include <libft.h>

// return (ft_strlen(src_start) + dstsize)

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		n;
	const char	*src_start;

	n = dstsize;
	src_start = src;
	while (n && *dst)
	{
		dst++;
		n--;
	}
	if (n > 0)
	{
		while (n + 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
			n--;
		}
		*dst = '\0';
	}
	return (ft_strlen(src_start) + dstsize);
}
