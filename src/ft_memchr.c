/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:10:23 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/10 21:10:25 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memchr(3).
** Parameters: void pointer to some read-only source memory, integer "c" that
** is probably in ASCII or extended ASCII range and will get cast to an
** unsigned char type inside the function, and a number "n" of type size_t
** Side effect: Locates the first occurrence of (unsigned char)c in memory
** at s + 0 through s + (n - 1)
** Return value: pointer to the bytelocated, or NULL if no byte containing
** (unsigned char)c exists in the first n bytes of the source.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_char;

	if (!s)
		return (NULL);
	c = (unsigned char)c;
	s_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_char[i] == c)
			return (s_char + i);
		i++;
	}
	return (NULL);
}
