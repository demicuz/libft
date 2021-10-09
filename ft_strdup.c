#include <stdlib.h>
#include "libft.h"

// TODO dunno if actually works

char	*ft_strcpy(char *dest, const char *src)
{
	char	*temp;

	temp = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

char	*ft_strdup(const char *src)
{
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (result)
		result = ft_strcpy(result, src);
	return (result);
}
