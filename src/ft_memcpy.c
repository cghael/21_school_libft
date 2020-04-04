/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:40:02 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/25 12:20:00 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memcpy(3).
** This function takes a destination in memory, a source in memory, and a
** size_t n, and returns a void pointer to the (now modified) destination.
** Its side effect is to copy n bytes from the source to the destination.
** If the destination and any of the first n bytes of the source
** area overlap, the behavior is underfined - the function has no check
** for if there is overlap. The man page for memcpy(3) suggests using
** memmove(3) if the destination and source overlap.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_char;
	const unsigned char	*src_char;
	size_t				i;

	i = 0;
	dst_char = dst;
	src_char = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	else
		while (n)
		{
			dst_char[i] = src_char[i];
			n--;
			i++;
		}
	return (dst);
}
