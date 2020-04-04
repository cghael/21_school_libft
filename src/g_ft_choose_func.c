/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_ft_choose_func.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghael <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 16:18:01 by cghael            #+#    #+#             */
/*   Updated: 2020/01/16 11:44:40 by cghael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_choose_cs(t_type func_n_spec[17])
{
	func_n_spec[0].ch = 'c';
	func_n_spec[0].operation = &ft_c;
	func_n_spec[1].ch = 'C';
	func_n_spec[1].operation = &ft_c;
	func_n_spec[2].ch = '%';
	func_n_spec[2].operation = &ft_c;
	func_n_spec[3].ch = 's';
	func_n_spec[3].operation = &ft_s;
}

static void		ft_choose_di(t_type func_n_spec[17])
{
	func_n_spec[4].ch = 'd';
	func_n_spec[4].operation = &ft_di;
	func_n_spec[5].ch = 'D';
	func_n_spec[5].operation = &ft_di;
	func_n_spec[6].ch = 'i';
	func_n_spec[6].operation = &ft_di;
}

static void		ft_choose_fg(t_type func_n_spec[17])
{
	func_n_spec[7].ch = 'f';
	func_n_spec[7].operation = &ft_f;
	func_n_spec[8].ch = 'F';
	func_n_spec[8].operation = &ft_f;
	func_n_spec[9].ch = 'g';
	func_n_spec[9].operation = &ft_f;
	func_n_spec[10].ch = 'G';
	func_n_spec[10].operation = &ft_f;
}

static void		ft_choose_ouxbp(t_type func_n_spec[17])
{
	func_n_spec[11].ch = 'o';
	func_n_spec[11].operation = &ft_o;
	func_n_spec[12].ch = 'u';
	func_n_spec[12].operation = &ft_u;
	func_n_spec[13].ch = 'x';
	func_n_spec[13].operation = &ft_x;
	func_n_spec[14].ch = 'X';
	func_n_spec[14].operation = &ft_x;
	func_n_spec[15].ch = 'b';
	func_n_spec[15].operation = &ft_b;
	func_n_spec[16].ch = 'p';
	func_n_spec[16].operation = &ft_p;
}

void			(*g_ft_choose_func(t_ftptf *tmp_t))(t_arg*, t_res*, t_ftptf*)
{
	int			i;
	t_type		func_n_spec[17];

	i = 0;
	ft_choose_cs(func_n_spec);
	ft_choose_di(func_n_spec);
	ft_choose_fg(func_n_spec);
	ft_choose_ouxbp(func_n_spec);
	while (i < (int)(sizeof(func_n_spec) / sizeof(t_type)))
	{
		if ((*tmp_t).spec == func_n_spec[i].ch)
			return (func_n_spec[i].operation);
		i++;
	}
	return (NULL);
}
