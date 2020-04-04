/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:41:00 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/25 18:19:46 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*tmp;
	char	*res;

	i = ft_strlen(src);
	tmp = (char *)malloc(i + 1);
	if (!tmp)
		return (NULL);
	else
		ft_memset(tmp, '\0', i + 1);
	res = tmp;
	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	return (res);
}
