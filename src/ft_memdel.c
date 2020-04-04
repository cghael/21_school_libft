/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:17:14 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:06:25 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Non-standard function memdel.  Takes the address of a memory area that needs
** to be freed, uses free(3) to free that area, AND points the pointer taken
** in as an argument to NULL. Does not return anything.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
