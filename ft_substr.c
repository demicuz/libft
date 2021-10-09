/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psharen <psharen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2000/01/01 20:20:20 by psharen           #+#    #+#             */
/*   Updated: 2000/01/01 20:20:20 by psharen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

// TODO this is a bonus
static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*temp;

	temp = dest;
	while (*src && n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n)
	{
		*dest = '\0';
		n--;
	}
	return (temp);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*sub;

	s_len = ft_strlen(s);
	if (s_len <= start)
		return ft_strdup("");
	sub_len = min(len, s_len - start);
	sub = malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	return (ft_strncpy(sub, s + start, sub_len));
}
