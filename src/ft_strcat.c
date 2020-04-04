/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:18:38 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:09:54 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** ft_strcat() append a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating `\0'.
** The string s1 must have sufficient space to hold the result.
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	ft_strcpy(s1 + ft_strlen(s1), s2);
	return (s1);
}
