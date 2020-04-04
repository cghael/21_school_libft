/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:48:45 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:09:29 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putendl().
** Parameters: const string
** Side effect: writes the string argument to standard out, followed by a
** newline
** Return value: none
** If s is NULL, ft_putstr will do nothing (see ft_putstr which checks for if
** the pointer passed to it is nul), but ft_putchar() will put the newline.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
