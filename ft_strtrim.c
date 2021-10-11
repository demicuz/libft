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

static int ft_in(char const *set, char c)
{
	if (!c)
		return (0);
	while (*set && *set != c)
		set++;
	return (*set == c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char const	*start;
	char const	*end;

	while (*s1 && ft_in(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (len == 0)
		return ft_strdup("");
	start = s1;
	while (*s1)
		s1++;
	// TODO s1[-1] shoots in the leg if s1 == ""
	while (s1[-1] && s1 > start)
	{
		s1--;
	}
	// TODO
}
