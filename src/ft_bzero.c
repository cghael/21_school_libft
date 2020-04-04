/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:29:19 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 20:59:58 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the depricated, formerly Standard C Library function bzero().
** This file defines the non-returning function bzero() that takes a void
** pointer s, and a size_t argument n, and writes '0' into memory bytes starting
** at the byte pointed to by s and continuing through bytes s + (n - 1).  This
** function does not return anything.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
