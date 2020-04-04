/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:43:44 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/25 12:20:00 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *buf;

	if (!dst || !src)
		return (NULL);
	buf = dst;
	while (*src)
		*buf++ = *src++;
	*buf = '\0';
	return (dst);
}
