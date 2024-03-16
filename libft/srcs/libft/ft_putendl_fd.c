/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:36:59 by root              #+#    #+#             */
/*   Updated: 2024/03/16 15:16:07 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes the string 's' followed by a newline to the given file descriptor 'fd'
void	ft_putendl_fd(char *s, int fd)
{
	ssize_t	ret;

	if (s)
	{
		ret = write(fd, s, ft_strlen(s));
		(void)ret;
		ret = write(fd, "\n", 1);
		(void)ret;
	}
}
