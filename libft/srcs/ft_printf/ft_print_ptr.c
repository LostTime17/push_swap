/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:37:15 by root              #+#    #+#             */
/*   Updated: 2023/11/06 15:19:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putlhex(unsigned long int nb, char *base, int *len)
{
	if (nb > 0)
	{
		ft_putlhex(nb / 16, base, len);
		write (1, &base[nb % 16], 1);
		(*len)++;
	}
}

int	ft_print_ptr(unsigned long int nb)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 2;
	if (nb == 0)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	ft_putlhex(nb, base, &len);
	return (len);
}
