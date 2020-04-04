/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:26:00 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/10 21:26:01 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memcmp(3).
** Parameters: two areas of read-only memory, and a number "n" of type size_t
** Side-effect: compare up to the first n bytes of a the two memory areas, but
** with an index so there is no side-effect to the pointers passed.
** Return value: the difference between either the first byte at which the
** two sources differ, or 0 if they are the same. In comparison, byte contents
** are treated as unsigned chars.
** This function assumes that both byte strings are of length n; it doesn't
** handle cases where one is shorter and might force the computer to try to
** access non-existant or inaccessible memory, for example.
** Manual page says, "Zero-length strings are always identical", so return
** value in that case is 0; the function assumes length is indicated by the
** argument n, so if n is 0 the function skips to the return (0) statement.
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_char;
	unsigned char *s2_char;

	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	while (n)
	{
		n--;
		if (*s1_char != *s2_char)
			return (ft_strcmp(s1, s2));
		s1_char++;
		s2_char++;
		s1++;
		s2++;
	}
	return (0);
}
