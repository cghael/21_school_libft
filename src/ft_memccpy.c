/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:13:09 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:06:01 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the C Standard Library function memccpy(3).
** This function takes a pointer to some destination area of memory dst, a
** pointer to some read-only source memory, an int c, and a size_t n.
** Note, like in ft_memset(3), the "int c" is similarly misleading - the
** argument c is an integer in ASCII or extended ASCII range, and will
** be immediately typecast to an unsigned char.
** Side-effect: copies up to n bytes from the source memory to the destination
** memory, stopping either after n bytes have been copied, or when the
** character (unsigned char)c is first encountered in the source, whichever
** comes first.
** Return value: If n bytes are copied, a NULL pointer is returned. Otherwise,
** a pointer to the byte AFTER the copy of (unsigned char)c in the destination
** is returned.
** Like with ft_memcpy(3), if the source and destination overlap, the behavior
** is undefined.
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_char;
	const unsigned char	*src_char;
	int					i;

	i = 0;
	c = (unsigned char)c;
	dst_char = dst;
	src_char = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	else
		while (n)
		{
			dst_char[i] = src_char[i];
			if (dst_char[i] == c)
				return (dst_char + i + 1);
			n--;
			i++;
		}
	return (NULL);
}
