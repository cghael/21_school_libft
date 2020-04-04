/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:45:05 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/09 12:41:02 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of non-standard function putstr().
** Parameters: const string
** Side effect: writes each character in the argument string to standard out,
** consecutively in the order they appear in the string (so, writes the
** string passed to the function to standard out)
** Return value: none
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i++]);
		}
	}
}
