/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:10:53 by ksemele           #+#    #+#             */
/*   Updated: 2020/01/30 16:10:55 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_fstring		*ft_create_fstring(t_float res)
{
	t_fstring			*tmp;
	char				*str;
	int					exp_abs;

	tmp = (t_fstring*)malloc(sizeof(t_fstring));
	if (!tmp)
		ft_error_exit("Malloc error in ft_create_fstring()", NULL);
	ft_bzero(tmp, sizeof(t_fstring));
	tmp->mant_str = ft_u64toa_base(res.number.mant, 2, 0);
	tmp->exp = res.number.expo - 16382;
	if (tmp->exp < 0)
	{
		exp_abs = ft_abs(tmp->exp);
		if (!(str = ft_strnew(exp_abs + ft_strlen(tmp->mant_str))))
			ft_error_exit("Malloc in ft_create_fstring()", NULL);
		str = ft_memset(str, '0', exp_abs);
		ft_strcpy(str + exp_abs, tmp->mant_str);
		free(tmp->mant_str);
		tmp->mant_str = str;
		tmp->exp = 0;
	}
	return (tmp);
}

static int				ft_check_non_zero(const int arr[], int index, int size)
{
	int					i;

	i = index;
	while (i < size)
	{
		if (arr[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

static t_fstring		*ft_add_float_to_str(t_fstring *numb, t_ftptf tmp_t)
{
	char				*tmp;
	char				*final_str;

	numb->digit_str = ft_integer_to_str(numb);
	if (tmp_t.dot && tmp_t.precision == 0)
	{
		if (numb->div_numb[0] >= 5)
		{
			if (!(numb->div_numb[0] == 5 && \
				(numb->int_numb[FLOAT_BUFF] + 1) % 2 && \
				ft_check_non_zero(numb->div_numb, 1, FLOAT_BUFF + 1)))
				numb = ft_add_dig_to_int(numb);
			numb->digit_str = ft_integer_to_str(numb);
		}
		return (numb);
	}
	if (!tmp_t.precision)
		return (numb);
	tmp = ft_round_float(numb, tmp_t);
	final_str = ft_strjoin(numb->digit_str, tmp);
	free(tmp);
	free(numb->digit_str);
	numb->digit_str = final_str;
	return (numb);
}

char					*ft_count_float(t_float res, t_ftptf tmp_t)
{
	t_fstring			*numb;

	numb = ft_create_fstring(res);
	numb = ft_get_integer(numb);
	if ((res.value != LDBL_MIN && res.value != -LDBL_MIN) || \
			tmp_t.precision >= 4930)
		numb = ft_get_divisional(numb);
	if (tmp_t.dot == 0 && tmp_t.spec != 'G' && tmp_t.spec != 'g')
		tmp_t.precision = 6;
	numb = ft_add_float_to_str(numb, tmp_t);
	return (numb->digit_str);
}
