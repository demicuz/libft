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

#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"

// useful: https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html

int	main(void)
{
	char *r = ft_itoa(-2147483648);
	if (r)
		printf("%s\n", r);
	else
		puts("nullptr");
	// for (int i = 0; i < 128; ++i)
	// {
	// 	printf("%d: %c\n", i, i);
	// }
}
