/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:28:27 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:17:25 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (needle[i] == '\0' || haystack == needle)
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0' && i < len)
	{
		k = i;
		j = 0;
		while (haystack[k] == needle[j] && k < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}
