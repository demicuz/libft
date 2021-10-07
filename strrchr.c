#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;

	if (*s == c)
		return ((char *) s);
	else
		return (NULL);
}
