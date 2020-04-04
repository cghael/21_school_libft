/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_divisional.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 21:33:06 by ksemele           #+#    #+#             */
/*   Updated: 2020/02/06 21:33:08 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_five_multiple(int multpl[])
{
	int			i;
	int			tmp;

	i = 0;
	tmp = 0;
	while (i < multpl[0])
	{
		multpl[FLOAT_BUFF - i] = multpl[FLOAT_BUFF - i] * 5;
		multpl[FLOAT_BUFF - i] += tmp;
		tmp = 0;
		if (multpl[FLOAT_BUFF - i] / 10)
		{
			tmp = multpl[FLOAT_BUFF - i] / 10;
			multpl[FLOAT_BUFF - i] = multpl[FLOAT_BUFF - i] % 10;
		}
		i++;
	}
	if (tmp && (multpl[FLOAT_BUFF - i] == 0))
		multpl[0]++;
	multpl[FLOAT_BUFF - i] += tmp;
}

static void		ft_five_divine_ten(int tmp, int div_numb[], int j)
{
	while (j >= 0 && tmp)
	{
		div_numb[j] += tmp;
		tmp = 0;
		if (div_numb[j] / 10)
		{
			tmp = div_numb[j] / 10;
			div_numb[j] = div_numb[j] % 10;
		}
		j--;
	}
}

static void		ft_five_plus(const int multpl[], int div_numb[], int j)
{
	int			i;
	int			tmp;

	i = 0;
	tmp = 0;
	while (i <= multpl[0] && i <= FLOAT_BUFF && j >= 0)
	{
		div_numb[j] += multpl[FLOAT_BUFF - i];
		div_numb[j] += tmp;
		tmp = 0;
		if (div_numb[j] / 10)
		{
			tmp = div_numb[j] / 10;
			div_numb[j] = div_numb[j] % 10;
		}
		i++;
		j--;
	}
	ft_five_divine_ten(tmp, div_numb, j);
}

/*
** fill numb->div_numb numbers with numbers in base 10.
*/

t_fstring		*ft_get_divisional(t_fstring *numb)
{
	int			j;
	char		*start;
	char		*end;
	int			multpl[FLOAT_BUFF + 1];

	start = &numb->mant_str[numb->exp];
	end = start;
	end = ft_strrchr(end, '1');
	if (end < start)
		return (numb);
	ft_bzero(multpl, sizeof(multpl));
	multpl[FLOAT_BUFF] = 1;
	multpl[0] = 1;
	j = 0;
	while (start <= end)
	{
		ft_five_multiple(multpl);
		if (*start == '1')
			ft_five_plus(multpl, numb->div_numb, j);
		start++;
		j++;
	}
	return (numb);
}
