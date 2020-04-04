/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:38:28 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:07:30 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function memset(3).
** This function takes a void pointer to some memory, an integer c, and size_t
** variable n that shows the number of bytes starting at the byte pointed to
** by the first argument, that should be filled with the unsigned char cast
** of the integer c.  Note this overwrites whatever may be in the byte before.
** The function returns a void pointer to the first byte in memory written to.
** The only "tricky" thing is that the parameter c is basically not an int
** for the purposes of the function, though it must be when passed in; it gets
** immediately typecase to an unsigned char.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*res;
	int				i;

	i = 0;
	c = (unsigned char)c;
	res = b;
	while (len)
	{
		res[i] = c;
		len--;
		i++;
	}
	return (res);
}
