/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 18:48:34 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/03 20:24:26 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstdel().
** Parameters: pointer to the head pointer of a t_list, pointer to a deletion
** function that takes a void * and size_t and returns nothing
** Side effect: if the parameters are not null, frees the content and the
** content_size attributes of each node in the string list, and the pointer
** to each node, and then sets the head pointer to NULL.
** Return value: none
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	while (*alst)
	{
		tmp = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		*alst = NULL;
		free(*alst);
		*alst = tmp;
	}
}
