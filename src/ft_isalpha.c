/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:55:07 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:01:18 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the outdated Standard C Library function isalpha(3).
** Parameters: integer c that is likely in ASCII or extended ASCII range
** Side effect: none
** Return value: zero if the unsigned char cast of c is in neither the capital
** alphabet A-Z or lowercase alphabet a-z, non-zero otherwise (in this
** implementation, it will return 11111111111)
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
