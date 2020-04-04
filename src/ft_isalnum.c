/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:12:05 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:00:43 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isalnum(3).
** Parameters: integer c, likely in ASCII or extended ASCII range
** Side effect: none
** Return value: 0 if the unsigned char cast of c is neither an upper- or
** lower-case letter nor digit, or if it is, then 1 is returned in this
** implementation - another route would be to return c
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
