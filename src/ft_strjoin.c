/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:47:17 by ksemele           #+#    #+#             */
/*   Updated: 2019/10/25 16:24:41 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function create new char *res sizeof (s1 + s2) (if cant - return NULL)
** Then they copy s1 to res & adds s2 to res too.
** Return: pointer to res
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	if (!s1 || !s2)
		return (NULL);
	res = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (res == NULL)
		return (NULL);
	else
		ft_strcpy(res, s1);
	ft_strcat(res, s2);
	return (res);
}
