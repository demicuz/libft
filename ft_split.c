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

// hello____
static char	*ft_dostuff(char *c_then_word, char *result)
{

}

// __hello__world__
char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;
	char	*last_word;

	word_count = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (*s == c)
		s++;
	while (word_count)
	{

	}
	*result = (NULL);
	return (result - word_count);
}
