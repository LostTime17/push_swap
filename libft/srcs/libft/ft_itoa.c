/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:25:53 by root              #+#    #+#             */
/*   Updated: 2023/09/22 14:34:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n);
static void	ft_fill_string(char *s, int n, int len);

// Convert an integer to its string represent
char	*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = ft_intlen(n);
	s = malloc(len + 1);
	if (!s)
		return (0);
	s[len] = '\0';
	ft_fill_string(s, n, len);
	return (s);
}

static int	ft_intlen(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	ft_fill_string(char *s, int n, int len)
{
	if (n == 0)
	{
		s[0] = '0';
		return ;
	}
	if (n < 0)
	{
		s[0] = '-';
		if (n == INT_MIN)
		{
			s[1] = '2';
			n = 147483648;
		}
		else
			n = -n;
	}
	while (n)
	{
		s[--len] = (n % 10) + '0';
		n /= 10;
	}
}
