/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:12:59 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:08:24 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memmove(3).
** This function takes a void pointer to some destination memory, a void
** pointer to some read-only source memory, and a number "n" of type size_t.
** Side-effect: copies n bytes from the source memory (so source + 0 through
** source + (n - 1)) to the destination.
** Return value: pointer to the front of destination (or NULL if copy failed).
** The manual page says "The two strings may overlap; th copy is always done
** in a non-destructive manner" - since src is const, any overlap with dst
** will only get modified indirectly, with the dst pointer, not directly
** with the src pointer.
** Note that this implementation is more secure than those that use a temp
** buffer: we are sure to do the copy regardless of whether or not there
** is additional memory available.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_char;
	const unsigned char	*src_char;

	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	else if (dst <= src)
	{
		ft_memcpy(dst, src, len);
	}
	else
		while (len--)
		{
			dst_char[len] = src_char[len];
		}
	return (dst);
}
