/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leathertube <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:08:39 by leathertu         #+#    #+#             */
/*   Updated: 2019/10/25 12:20:00 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Custom func. Count number of nodes in list.
** Params: pointer to head of list.
** Return: size_t count of nodes in list if ptr != NULL.
*/

#include "libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t len;

	len = 0;
	if (lst)
	{
		while (lst)
		{
			lst = lst->next;
			len++;
		}
	}
	return (len);
}
