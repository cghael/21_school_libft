/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:43:55 by ksemele           #+#    #+#             */
/*   Updated: 2019/11/05 19:36:49 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_gnlist		*ft_newgnlnode(int fd)
{
	t_gnlist		*new;

	if (!(new = (t_gnlist *)malloc(sizeof(t_gnlist))))
		return (NULL);
	if (!(new->data = (char *)malloc(BUFF_SIZE + 1)))
		return (NULL);
	ft_bzero(new->data, BUFF_SIZE + 1);
	new->fd = fd;
	new->next = NULL;
	return (new);
}

static void			ft_delgnlnode(t_gnlist **head, t_gnlist *node)
{
	t_gnlist		*cur;
	t_gnlist		*prev;

	prev = *head;
	cur = *head;
	while (cur != NULL && cur != node)
	{
		prev = cur;
		cur = cur->next;
	}
	if (cur != NULL && cur == node)
	{
		if (cur == *head)
			*head = cur->next;
		prev->next = cur->next;
		free(cur->data);
		free(cur);
	}
}

static char			*ft_cpy_head_n_tail(char *tmp_line, char *data, char *eos)
{
	char			*new;

	new = (tmp_line) ? ft_strjoin(tmp_line, data) : ft_strdup(data);
	if (!new)
		return (NULL);
	if (tmp_line)
		free(tmp_line);
	if (eos != NULL)
		ft_strcpy(data, eos + 1);
	else
		ft_strclr(data);
	return (new);
}

static int			ft_fgnl(char *data, int len, int fd, char **line)
{
	int				flag;
	char			*eos;
	char			*tmp_line;

	eos = NULL;
	tmp_line = NULL;
	flag = (len > 0);
	while (!eos)
	{
		if ((len = (!flag) ? read(fd, data, BUFF_SIZE) : len) <= 0)
			break ;
		data[len] = '\0';
		if ((eos = ft_strchr(data, '\n')) != NULL)
			*eos = '\0';
		if (!(tmp_line = ft_cpy_head_n_tail(tmp_line, data, eos)))
			return (-1);
		flag = 0;
	}
	if (len == -1)
	{
		free(tmp_line);
		return (-1);
	}
	*line = tmp_line;
	return ((len != 0 || (*line != NULL && (*line)[0] != '\0')) ? 1 : 0);
}

int					ft_get_next_line(const int fd, char **line)
{
	static t_gnlist	*head;
	t_gnlist		*node;
	int				res;

	if ((BUFF_SIZE <= 0) || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (head == NULL)
	{
		if (!(head = ft_newgnlnode(fd)))
			return (-1);
	}
	node = head;
	while (node->fd != fd)
	{
		if (node->next == NULL)
		{
			if (!(node->next = ft_newgnlnode(fd)))
				return (-1);
		}
		node = node->next;
	}
	res = ft_fgnl((char *)(node->data), ft_strlen(node->data), node->fd, line);
	if (res <= 0)
		ft_delgnlnode(&head, node);
	return (res);
}
