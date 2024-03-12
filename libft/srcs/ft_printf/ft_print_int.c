/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:44:06 by root              #+#    #+#             */
/*   Updated: 2023/10/11 14:16:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_print_char((n % 10) + '0');
}

int	ft_print_int(int n)
{
	int	count;
	int	nb;

	count = 0;
	nb = n;
	if (n == 0)
		return (write(1, "0", 1));
	if (n < 0)
		count++;
	while (nb != 0)
	{
		count++;
		nb /= 10;
	}
	ft_putnbr(n);
	return (count);
}
