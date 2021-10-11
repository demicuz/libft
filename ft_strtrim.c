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
#include <stdio.h>

static int ft_in(char const *set, char c)
{
	if (!c)
		return (0);
	while (*set && *set != c)
		set++;
	return (*set == c);
}

static char	*ft_strndup_simple(const char *src, size_t len)
{
	char	*result;
	char	*p;

	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	p = result;
	while (len)
	{
		*p = *src;
		p++;
		src++;
		len--;
	}
	*p = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char const	*start;

	while (*s1 && ft_in(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (len == 0)
		return ft_strdup("");
	start = s1;
	while (*s1)
		s1++;
	while (ft_in(set, s1[-1]) && s1 > start)
	{
		s1--;
		len--;
	}
	return (ft_strndup_simple(start, len));
}
