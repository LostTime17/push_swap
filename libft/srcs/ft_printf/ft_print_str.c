/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:32:55 by root              #+#    #+#             */
/*   Updated: 2023/10/11 12:54:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *s)
{
	int	len;

	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (s[len])
		len++;
	write (1, s, len);
	return (len);
}
