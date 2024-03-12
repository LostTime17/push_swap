/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:28:00 by root              #+#    #+#             */
/*   Updated: 2023/09/05 15:28:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes the character 'c' to the given file descriptor 'fd'
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
