/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:23:39 by root              #+#    #+#             */
/*   Updated: 2023/10/04 12:37:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy 'n' bytes from 'src' to 'dest', and return the 'dest' pointer
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (dest == src || !n)
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}
