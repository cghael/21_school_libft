/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer_to_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 19:35:40 by ksemele           #+#    #+#             */
/*   Updated: 2020/02/07 19:35:41 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_fstring		*ft_count_numblen(t_fstring *numb)
{
	int					i;

	i = 0;
	while (numb->int_numb[i] == 0 && i <= FLOAT_BUFF)
		i++;
	numb->int_len = FLOAT_BUFF - i + 1;
	if (numb->int_len == 0)
		numb->int_len = 1;
	return (numb);
}

char					*ft_integer_to_str(t_fstring *numb)
{
	int					i;
	char				*str;

	i = 0;
	numb = ft_count_numblen(numb);
	str = (char*)malloc(numb->int_len + 1);
	if (!str)
		ft_error_exit("Error malloc in ft_integer_to_str", NULL);
	while (i < numb->int_len)
	{
		str[i] = numb->int_numb[FLOAT_BUFF - numb->int_len + 1 + i] + '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
