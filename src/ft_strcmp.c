/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:44:31 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/09 12:39:33 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *s1_char;
	unsigned char *s2_char;

	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	while (*s1_char == *s2_char && *s1_char != '\0' && *s2_char != '\0')
	{
		s1_char++;
		s2_char++;
	}
	return (*s1_char - *s2_char);
}
