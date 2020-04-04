/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:02:41 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/09 12:40:31 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
** Param. #1: The integer to output.
** Return value: None.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	res;

	res = n;
	if (n < 0)
		res = -res;
	if (res / 10 == 0)
	{
		if (n < 0)
		{
			ft_putchar('-');
			ft_putchar((res) + '0');
		}
		else
			ft_putchar((res) + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((res % 10) + '0');
	}
}
