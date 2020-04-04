/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:03:09 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/25 17:08:54 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Non-standard function allocates memory using malloc(3) and initliazes all
** bytes to 0.  Returns a pointer to the first byte, or NULL if malloc failed.
** Parameter size_t size indicates how much memory to allocate.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *new;

	new = (void *)malloc(sizeof(*new) * size);
	if (new == NULL)
		return (NULL);
	else
		ft_bzero(new, size);
	return (new);
}
