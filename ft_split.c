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

// __hello__world__
char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;

	word_count = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	while (word_count)
	{//TODO
		s = do_stuff;
		word_count--;
	}
	return (result);
}
