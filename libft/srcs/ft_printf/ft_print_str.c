/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:32:55 by root              #+#    #+#             */
/*   Updated: 2024/03/16 15:20:52 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(const char *s)
{
	int		len;
	ssize_t	ret;

	if (s == NULL)
	{
		ret = write (1, "(null)", 6);
		(void)ret;
		return (6);
	}
	len = 0;
	while (s[len])
		len++;
	ret = write (1, s, len);
	(void)ret;
	return (len);
}
