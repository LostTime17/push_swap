/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:37:15 by root              #+#    #+#             */
/*   Updated: 2024/03/16 15:20:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putlhex(unsigned long int nb, char *base, int *len)
{
	ssize_t	ret;

	if (nb > 0)
	{
		ft_putlhex(nb / 16, base, len);
		ret = write (1, &base[nb % 16], 1);
		(void)ret;
		(*len)++;
	}
}

int	ft_print_ptr(unsigned long int nb)
{
	char	*base;
	int		len;
	ssize_t	ret;

	base = "0123456789abcdef";
	len = 2;
	if (nb == 0)
	{
		ret = write (1, "(nil)", 5);
		(void)ret;
		return (5);
	}
	ret = write (1, "0x", 2);
	(void)ret;
	ft_putlhex(nb, base, &len);
	return (len);
}
