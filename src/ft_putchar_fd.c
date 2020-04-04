/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksemele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:51:49 by ksemele           #+#    #+#             */
/*   Updated: 2019/09/14 13:54:57 by ksemele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Non-standard function putchar_fd()
** Parameters: a character, and an integer "fd" that is a valid file descriptor
** Side effect: writes the character to the file descriptor.  Note that if the
** argument passed for the file descriptor is not valid, the program crashes.
** Return value: none
*/

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
