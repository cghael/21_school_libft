/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 03:33:55 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/15 03:33:56 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coding of the non-standard funciton itoa().
** Parameters: an integer
** Side effect: allocates memory and puts a string representing the integer
** argument in it
** Return value: a string version of the integer passed, or NULL if the memory
** allocation failed
*/

#include "libft.h"

int		ft_size(long int n)
{
	int		size;

	if (!n)
		return (1);
	size = 0;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	char		*res;
	int			i;
	long int	n;

	n = nb;
	i = ft_size(n);
	res = (char*)ft_memalloc(i + 1);
	if (!res)
		return (NULL);
	res[i--] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[i--] = '0' + (n % 10);
		n = n / 10;
	}
	return (res);
}
