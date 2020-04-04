/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:25:38 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 21:17:45 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	int		j;
	int		a;

	i = 0;
	a = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	j = ft_strlen(s) - 1;
	if (s[i] == '\0')
		return (ft_strnew(0));
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	res = ft_strnew(j - i + 1);
	if (res == NULL)
		return (NULL);
	while (i <= j)
		res[a++] = s[i++];
	res[i + 1] = '\0';
	return (res);
}
