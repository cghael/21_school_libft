/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:27:25 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:02:20 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isprint(3).
** Parameters: integer c, hopefully in ASCII or extended ASCII range
** Side effect: none
** Return value: 1 if the unsigned char cast of c is a printing character,
** i.e. if it is in range 32 through 126 inclusive, and 0 otherwise.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
