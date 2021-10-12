/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psharen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:19:57 by psharen           #+#    #+#             */
/*   Updated: 2021/10/09 18:20:10 by psharen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO check for memory leaks

#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"

// useful: https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html

char ft_wat(unsigned int i, char c)
{
	return ((c + 1) % 128);
}

int	main(void)
{
	char s[] = "aaa123";
	char *r = ft_strmapi(s, &ft_wat);
	if (r)
		printf("%s\n", r);
	else
		puts("nullptr");
	// for (int i = 0; i < 128; ++i)
	// {
	// 	printf("%d: %c\n", i, i);
	// }
}
