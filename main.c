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

void	ft_print_list(t_list *lst)
{
	if (!lst)
		return;
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list *lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew((void *) "hello"));
	ft_print_list(lst);
}
