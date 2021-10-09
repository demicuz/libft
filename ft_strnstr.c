#include <stdlib.h>

// TODO dunno if this actually works

static int	ft_compare(const char *str, const char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	if (n == 0)
		return (NULL);
	while (*big && n - 1)
	{
		if (ft_compare(big, little))
			return ((char *) big);
		big++;
		n--;
	}
	return (NULL);
}
