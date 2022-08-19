/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psharen <psharen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2000/01/01 20:20:20 by psharen           #+#    #+#             */
/*   Updated: 2022/08/19 15:46:59 by psharen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Like strchr, but start searching from the end of `s`.
char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	c &= 0b11111111;
	p = s;
	while (*p)
		p++;
	while (*p != c && p != s)
		p--;
	if (*p == c)
		return ((char *) p);
	else
		return (NULL);
}
