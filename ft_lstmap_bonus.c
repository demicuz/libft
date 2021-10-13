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

#include <stdio.h>
#include "libft.h"

// We won't ever know if f() has succeeded or not. E.g. if it returns NULL,
// we will create a list with content == NULL and that's like... Fine.
// Also the original list is not protected from the side effects of f().
// We can change the original content with it. That's a bad thing.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;

	if (!lst)
		return (NULL);

	new_list = ft_lstnew(f(lst->content));

	return (new_list);
}
