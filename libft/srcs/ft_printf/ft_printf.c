/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:52:51 by root              #+#    #+#             */
/*   Updated: 2023/10/11 13:39:43 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_parse_string(const char *s, va_list args);
static int	ft_print_arg(char c, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (0);
	count = 0;
	va_start (args, format);
	count = ft_parse_string(format, args);
	va_end (args);
	return (count);
}

static int	ft_parse_string(const char *s, va_list args)
{
	int		count;
	int		i;

	count = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			i++;
			if (ft_isspecifier(s[i]))
				count += ft_print_arg(s[i], args);
			else
				count += ft_print_char(s[i]);
		}
		else
			count += ft_print_char(s[i]);
	}
	return (count);
}

static int	ft_print_arg(char c, va_list args)
{
	if (c == '%')
		return (ft_print_char('%'));
	else if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(args, const char *)));
	else if (c == 'p')
		return (ft_print_ptr((unsigned long int)va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	return (ft_print_char('%') + ft_print_char(c));
}
