/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:54:02 by root              #+#    #+#             */
/*   Updated: 2023/10/11 13:13:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunsigned(unsigned int n)
{
	if (n >= 10)
		ft_putunsigned(n / 10);
	ft_print_char((n % 10) + '0');
}

int	ft_print_unsigned(unsigned int n)
{
	unsigned int	nb;
	int				count;

	count = 0;
	nb = n;
	if (n == 0)
		return (write(1, "0", 1));
	while (nb != 0)
	{
		count++;
		nb /= 10;
	}
	ft_putunsigned(n);
	return (count);
}
