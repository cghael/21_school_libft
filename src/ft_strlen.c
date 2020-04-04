/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:34:33 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/09 18:39:04 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function calculate lenght of string without ending '\0'
** Return: size_t of string.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	if (!s || !(*s))
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
