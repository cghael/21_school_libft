/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 21:34:06 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/04 22:12:16 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of nonstandard function lstmap().
** Parameters: pointer to the head node of a list, pointer to a function that
** takes a list node and returns a pointer to a list node
** Side effect: if the arguments passed are non-NULL, creates a new list
** that is the list where each element is the result of applying f to
** the corresponding node of the list passed
** Return value: pointer to the head of the new list, or NULL if the memory
** allocation failed or a NULL argument was passed
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	if (lst)
	{
		tmp = f(lst);
		tmp->next = ft_lstmap(lst->next, f);
		return (tmp);
	}
	else
		return (NULL);
}
