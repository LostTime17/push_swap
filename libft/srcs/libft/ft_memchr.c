/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:36:39 by root              #+#    #+#             */
/*   Updated: 2023/09/22 01:54:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Search and return first occurrence 'c' in the first 'n' bytes of 's'
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (0);
}
