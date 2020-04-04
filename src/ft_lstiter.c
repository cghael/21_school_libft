/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 21:10:04 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/03 21:33:31 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstiter().
** Parameters: pointer to the head of a list, non-returning function f that
** takes a t_list element
** Side effect: if the pointer arguments are valid (non-null), then this
** applies f to each node in the list. Note, it sets current to the head of
** list before entering the loop to start off. In the loop, we make sure we
** hold onto the current->next value before applying f, in case f is a deletion
** function; then we apply f to current, then we let current be the value we
** held onto before applying f, and continue in the loop.  Since the loop
** will stop when a node has node->next = NULL, f does not act on the last
** node of the list within the loop.  This is why I have a line after the end
** of the loop applying f to that last node.
** Return value: none
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
