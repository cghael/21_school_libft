/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:06:00 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 14:06:02 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the char c to the file descriptor fd.
** Param. #1: The character to output.
** Param. #2: The file descriptor.
** Return value: None.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;

	res = n;
	if (n < 0)
		res = -res;
	if (res / 10 == 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd((res) + '0', fd);
		}
		else
			ft_putchar_fd((res) + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((res % 10) + '0', fd);
	}
}
