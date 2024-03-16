/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:30:45 by root              #+#    #+#             */
/*   Updated: 2024/03/16 15:17:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes the string 's' to the given file descriptor 'fd'
void	ft_putstr_fd(char *s, int fd)
{
	ssize_t	ret;

	if (s)
	{
		ret = write(fd, s, ft_strlen(s));
		(void)ret;
	}
}
