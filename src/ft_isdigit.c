/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:04:01 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/13 17:04:03 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isdigit(3).
** Parameters: integer c (probably in ASCII or extended ASCII range)
** Side effect: none
** Return value: 0 if c is NOT a digit, some non-zero integer otherwise is all
** that is specified in the manual page - this could be c, or 1, here it is 1
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
