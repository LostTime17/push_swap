/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:54:23 by root              #+#    #+#             */
/*   Updated: 2023/10/07 13:08:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Mostly like ft_memcpy but safely, handle the overlapping
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (dest == src || !n)
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (p_dest < p_src || p_dest >= p_src + n)
	{
		while (n--)
			*p_dest++ = *p_src++;
	}
	else
	{
		p_dest += n;
		p_src += n;
		while (n--)
			*(--p_dest) = *(--p_src);
	}
	return (dest);
}
