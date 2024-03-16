/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:19:17 by root              #+#    #+#             */
/*   Updated: 2024/03/16 15:18:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned int nb, char *base, int *len)
{
	ssize_t	ret;

	if (nb > 0)
	{
		ft_puthex(nb / 16, base, len);
		ret = write (1, &base[nb % 16], 1);
		(void)ret;
		(*len)++;
	}
}

int	ft_print_hex(unsigned int nb, int uppercase)
{
	char	*base;
	int		len;
	ssize_t	ret;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len = 0;
	if (nb == 0)
	{
		ret = write (1, "0", 1);
		(void)ret;
		return (1);
	}
	ft_puthex(nb, base, &len);
	return (len);
}
