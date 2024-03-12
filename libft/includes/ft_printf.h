/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:53:19 by root              #+#    #+#             */
/*   Updated: 2024/03/12 16:28:48 by chchartp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header guard to prevent double inclusion
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Include library for functions
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

// Main ft_printf function
int		ft_printf(const char *format, ...);

// Functions to display various data types
int		ft_print_char(char c);
int		ft_print_str(const char *s);
int		ft_print_int(int n);
int		ft_print_ptr(unsigned long int nb);
int		ft_print_unsigned(unsigned int nb);
int		ft_print_hex(unsigned int nb, int uppercase);

// Functions to check character conditions
int		ft_isspecifier(int c);

#endif
