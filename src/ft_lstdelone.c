/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 21:33:47 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/25 12:20:00 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstdelone().
** Parameters: pointer to a link in a list, pointer to a deletion function
** that takes a void * and size_t, and returns nothing
** Side effect: if the arguments not NULL, deletes the node
** pointed to (frees its content, and then frees the pointer of the node), and
** sets the pointer of the node to NULL.
** Return value: none
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
