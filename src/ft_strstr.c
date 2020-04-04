/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:53:15 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/11 21:53:17 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (needle[i] == '\0' || haystack == needle)
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0')
	{
		k = i;
		j = 0;
		while (haystack[k] == needle[j])
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
