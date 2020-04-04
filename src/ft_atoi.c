/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 18:55:07 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/09 12:41:56 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Re-coding of the Standard C Library function atoi(3).
** Parameters: const string
** Side effect: none
** Return value: integer that was represented by the string passed
*/

#include "libft.h"

#define MAX_LONG 2147483648

static char	f_znaki(unsigned char str)
{
	if (str == ' ' || str == '\t' || str == '\n'
			|| str == '\v' || str == '\f' || str == '\r')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	unsigned long long int	res;
	int						znak;
	unsigned int			numb;

	res = 0;
	while (f_znaki(*str))
		str++;
	znak = (*str == '-') ? -1 : 1;
	if ((*str == '+') || (*str == '-'))
		str++;
	while (znak)
	{
		numb = *str - '0';
		if (numb > 9)
			break ;
		res = (10 * res) + numb;
		str++;
	}
	if (res > MAX_LONG && znak < 0)
		return (0);
	if (res > MAX_LONG && znak > 0)
		return (-1);
	return (res * znak);
}
