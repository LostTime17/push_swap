/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:10:43 by root              #+#    #+#             */
/*   Updated: 2024/03/16 15:16:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes the integer 'n' as a string to the given file descriptor 'fd'
void	ft_putnbr_fd(int n, int fd)
{
	ssize_t	ret;

	if (n == INT_MIN)
	{
		ret = write(fd, "-2147483648", 11);
		(void)ret;
		return ;
	}
	if (n < 0)
	{
		ret = write(fd, "-", 1);
		(void)ret;
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
