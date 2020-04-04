/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:35:59 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:16:37 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t i;

	i = 0;
	if (ft_strlen(s) < maxlen)
		return (ft_strlen(s));
	else
	{
		while (i <= maxlen)
		{
			if (s[i] == '\0')
				break ;
			i++;
		}
		return (i - 1);
	}
}
