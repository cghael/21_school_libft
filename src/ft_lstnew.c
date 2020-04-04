/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:29:59 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/25 12:20:00 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function lstnew().
** Parameters: const contnent of any type (void *) to be the data or content
** held in the list node to be created, and a size_t number that should be the
** sizeof() the first argument.
** Side effect: creates a new node in a linked list, with node->next set to
** NULL.  If the content argument passed is nul, then node-content_size is set
** to 0, even if something else was passed as the content_size argument.
** Return value: pointer to the t_list node created, or NULL if the memroy
** allocation fails.
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		newlist->content = (void *)malloc(sizeof(content) * content_size);
		if (!newlist->content || newlist->content == NULL)
			return (NULL);
		ft_memcpy((newlist->content), content, content_size);
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return (newlist);
}
