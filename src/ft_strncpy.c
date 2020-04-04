/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:43:00 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/09 13:09:25 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncpy() function copy at most len characters from
** src into dst.  If src is less than len characters long, the remainder of
** dst is filled with `\0' characters.  Otherwise, dst is not terminated.
** The source and destination strings should not overlap, as the behavior is
** undefined.
** RETURN VALUES
** The strncpy() function return dst.
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *f_dst;

	f_dst = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (*src && len)
	{
		*dst = *src;
		dst++;
		src++;
		len--;
	}
	while (len)
	{
		*dst = '\0';
		dst++;
		len--;
	}
	return (f_dst);
}
