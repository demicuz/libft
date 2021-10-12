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

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	char	in_word;

	if (c == '\0')
		return (0);
	words = 0;
	in_word = 0;
	while (*s)
	{
		if (!in_word && *s != c)
		{
			in_word = 1;
			words++;
		}
		else if (in_word && *s == c)
			in_word = 0;
		s++;
	}
	return (words);
}

// static char	*ft_strndup_simple(const char *src, size_t len)
// {
// 	char	*result;
// 	char	*p;

// 	result = malloc(sizeof(char) * (len + 1));
// 	if (!result)
// 		return (NULL);
// 	p = result;
// 	while (len)
// 	{
// 		*p = *src;
// 		p++;
// 		src++;
// 		len--;
// 	}
// 	*p = '\0';
// 	return (result);
// }

// ____hello____
// static char	*ft_get_next_word(char const *s, char c)
// {
// 	size_t	len;

// 	len = 0;
// 	while (*s == c)
// 		s++;
// 	while (s[len] && s[len] != c)
// 		len++;
// 	return (ft_strndup_simple(s, len));
// }

// absolutely wicked. moves *s, puts word in *p.
static void	ft_put_word(char **p, char **s)
{
	
}

static void	ft_free_all(char **words)
{

}

// __hello__world__
char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;
	char	**p;

	word_count = ft_count_words(s, c);
	result = ft_calloc(word_count + 1, sizeof(char));
	if (!result)
		return (NULL);
	p = result;
	while (word_count)
	{
		ft_put_word(p, (char **) &s);
		if (!*p)
		{
			ft_free_all(result);
			return (NULL);
		}
		word_count--;
		p++;
	}
	return (result);
}
