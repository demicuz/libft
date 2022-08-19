/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psharen <psharen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2000/01/01 20:20:20 by psharen           #+#    #+#             */
/*   Updated: 2022/08/19 15:46:19 by psharen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

t_list	*ft_lstnew(void *data)
{
	t_list	*foo;

	foo = malloc(sizeof(t_list));
	if (!foo)
		return (NULL);
	foo->data = data;
	foo->next = NULL;
	return (foo);
}
