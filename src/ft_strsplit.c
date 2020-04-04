/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:49:38 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/16 16:11:45 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s, int pos, char del)
{
	while (s[pos] && s[pos] == del)
		pos++;
	return (pos);
}

static int	ft_len(char const *s, int start, char del)
{
	int len;

	len = 1;
	while (s[start + len] && s[start + len] != del)
		len++;
	return (len);
}

static int	ft_count(char const *s, char del)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '\0')
			break ;
		i = ft_start(s, i, del);
		if (s[i] == '\0')
			break ;
		i += ft_len(s, i, del);
		count++;
	}
	return (count);
}

static char	**ft_free_elem(char ***word, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(*word[i]);
		i++;
	}
	free(*word);
	return (NULL);
}

char		**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**word;
	int		i;
	int		pos;

	if (s == NULL)
		return (NULL);
	count = ft_count(s, c);
	word = (char**)malloc((count + 1) * sizeof(char**));
	if (word == NULL)
		return (NULL);
	word[count] = NULL;
	pos = 0;
	i = -1;
	while (++i < count)
	{
		pos = ft_start(s, pos, c);
		if (s[pos] == '\0')
			break ;
		word[i] = ft_strsub(s, pos, ft_len(s, pos, c));
		if (word[i] == NULL)
			return (ft_free_elem(&word, count));
		pos += ft_len(s, pos, c);
	}
	return (word);
}
