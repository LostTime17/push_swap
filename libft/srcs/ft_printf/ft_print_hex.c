/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:19:17 by root              #+#    #+#             */
/*   Updated: 2023/10/11 13:30:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned int nb, char *base, int *len)
{
	if (nb > 0)
	{
		ft_puthex(nb / 16, base, len);
		write (1, &base[nb % 16], 1);
		(*len)++;
	}
}

int	ft_print_hex(unsigned int nb, int uppercase)
{
	char	*base;
	int		len;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len = 0;
	if (nb == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	ft_puthex(nb, base, &len);
	return (len);
}
